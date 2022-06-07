/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _INIT_H_RPCGEN
#define _INIT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct tabela {
	int transactionId;
	int challenge;
	struct {
		u_int seed_len;
		char *seed_val;
	} seed;
	int winner;
};
typedef struct tabela tabela;

struct info {
	int transactionId;
	int clientId;
	int seed;
};
typedef struct info info;

struct status {
	int challenge;
	struct {
		u_int seed_len;
		char *seed_val;
	} seed;
	int status;
};
typedef struct status status;

#define PROG 55555555
#define VERSAO 100

#if defined(__STDC__) || defined(__cplusplus)
#define getTransactionId 1
extern  int * gettransactionid_100(void *, CLIENT *);
extern  int * gettransactionid_100_svc(void *, struct svc_req *);
#define getChallenge 2
extern  int * getchallenge_100(int *, CLIENT *);
extern  int * getchallenge_100_svc(int *, struct svc_req *);
#define getSeed 3
extern  status * getseed_100(int *, CLIENT *);
extern  status * getseed_100_svc(int *, struct svc_req *);
#define getWinner 4
extern  int * getwinner_100(int *, CLIENT *);
extern  int * getwinner_100_svc(int *, struct svc_req *);
#define submitChallenge 5
extern  int * submitchallenge_100(info *, CLIENT *);
extern  int * submitchallenge_100_svc(info *, struct svc_req *);
#define getTransactionStatus 6
extern  int * gettransactionstatus_100(int *, CLIENT *);
extern  int * gettransactionstatus_100_svc(int *, struct svc_req *);
extern int prog_100_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define getTransactionId 1
extern  int * gettransactionid_100();
extern  int * gettransactionid_100_svc();
#define getChallenge 2
extern  int * getchallenge_100();
extern  int * getchallenge_100_svc();
#define getSeed 3
extern  status * getseed_100();
extern  status * getseed_100_svc();
#define getWinner 4
extern  int * getwinner_100();
extern  int * getwinner_100_svc();
#define submitChallenge 5
extern  int * submitchallenge_100();
extern  int * submitchallenge_100_svc();
#define getTransactionStatus 6
extern  int * gettransactionstatus_100();
extern  int * gettransactionstatus_100_svc();
extern int prog_100_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_tabela (XDR *, tabela*);
extern  bool_t xdr_info (XDR *, info*);
extern  bool_t xdr_status (XDR *, status*);

#else /* K&R C */
extern bool_t xdr_tabela ();
extern bool_t xdr_info ();
extern bool_t xdr_status ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INIT_H_RPCGEN */
