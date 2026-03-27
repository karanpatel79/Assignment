package com.oms.oms_backend.controller;

import com.oms.oms_backend.dto.OrderRequest;
import com.oms.oms_backend.entity.Order;
import com.oms.oms_backend.service.OrderService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;
import java.util.List;

@RestController
@RequestMapping("/api/orders")
public class OrderController {

    @Autowired
    private OrderService orderService;

    @PostMapping
    public ResponseEntity<?> placeOrder(@RequestBody OrderRequest request) {
        try {
            return ResponseEntity.ok(orderService.placeOrder(request));
        } catch (RuntimeException e) {
            return ResponseEntity.badRequest().body(e.getMessage());
        }
    }

    @GetMapping
    public List<Order> getOrders() {
        return orderService.getAllOrders();
    }

    @GetMapping("/customer/{userId}")
    public List<Order> getCustomerOrders(@PathVariable Long userId) {
        return orderService.getOrdersByUserId(userId);
    }
}