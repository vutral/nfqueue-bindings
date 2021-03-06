#ifndef __NFQ_COMMON__
#define __NFQ_COMMON__

#ifdef __cplusplus
extern "C" {
#endif

extern int  swig_nfq_callback(struct nfq_q_handle *qh, struct nfgenmsg *nfmsg,
                       struct nfq_data *nfad, void *data);

const char * nfq_bindings_version(void);

int queue_open(struct queue *self);

void queue_close(struct queue *self);

int queue_bind(struct queue *self, int af_family);

int queue_unbind(struct queue *self, int af_family);

int queue_set_queue_maxlen(struct queue *self, int maxlen);

int queue_create_queue(struct queue *self, int queue_num);

int queue_fast_open(struct queue *self, int queue_num, int af_family);

int queue_get_fd(struct queue *self);

int queue_set_mode(struct queue *self, int mode);

int queue_process_pending(struct queue *self, int max_count);

int queue_try_run(struct queue *self);

int payload_get_nfmark(struct payload *self);

int payload_get_indev(struct payload *self);

int payload_get_outdev(struct payload *self);

int payload_get_physindev(struct payload *self);

int payload_get_physoutdev(struct payload *self);

#ifdef __cplusplus
}
#endif

#endif /* __NFQ_COMMON__ */
