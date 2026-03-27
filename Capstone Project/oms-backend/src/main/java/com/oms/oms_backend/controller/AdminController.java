package com.oms.oms_backend.controller;

import com.oms.oms_backend.entity.Order;
import com.oms.oms_backend.entity.User;
import com.oms.oms_backend.service.OrderService;
import com.oms.oms_backend.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;
import java.util.List;
import java.util.Map;

@RestController
@RequestMapping("/api/admin")
public class AdminController {

    @Autowired private UserService userService;
    @Autowired private OrderService orderService;

    @GetMapping("/users")
    public List<User> getAllCustomers() {
        return userService.getAllCustomers();
    }

    @PutMapping("/block/{id}")
    public User toggleBlock(@PathVariable Long id) {
        return userService.toggleBlock(id);
    }

    @GetMapping("/orders/{userId}")
    public List<Order> getOrdersByUser(@PathVariable Long userId) {
        return orderService.getOrdersByUserId(userId);
    }

    // ✅ NEW — mark order as delivered
    @PutMapping("/orders/{orderId}/status")
    public Order updateOrderStatus(@PathVariable Long orderId, @RequestBody Map<String, String> body) {
        return orderService.updateOrderStatus(orderId, body.get("status"));
    }
}