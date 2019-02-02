// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2019
 *
 * Richard van Schagen <vschagen@cs.com>
 */


int mtk_ring_curr_wptr_index(struct mtk_device *mtk);

int mtk_ring_curr_rptr_index(struct mtk_device *mtk);

int mtk_ring_cdr_index(struct mtk_device *mtk,
				struct eip93_descriptor_s *cdesc);

void *mtk_ring_next_wptr(struct mtk_device *mtk, struct mtk_desc_ring *ring);

void *mtk_ring_next_rptr(struct mtk_device *mtk, struct mtk_desc_ring *ring);

void mtk_ring_rollback_wptr(struct mtk_device *mtk, struct mtk_desc_ring *ring);

void *mtk_ring_curr_wptr(struct mtk_device *mtk);

void *mtk_ring_curr_rptr(struct mtk_device *mtk);

struct eip93_descriptor_s *mtk_add_cdesc(struct mtk_device *mtk,
					struct mtk_dma_rec *rec, dma_addr_t saRecord_base,
					dma_addr_t saState_base);

struct eip93_descriptor_s *mtk_add_rdesc(struct mtk_device *mtk);

