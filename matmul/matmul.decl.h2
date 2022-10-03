#ifndef _DECL_matmul_H_
#define _DECL_matmul_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done();
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void done();
     */
    // Entry point registration at startup
    
    static int reg_done_void();
    // Entry point index lookup
    
    inline static int idx_done_void() {
      static int epidx = reg_done_void();
      return epidx;
    }

    
    inline static int idx_done(void (Main::*)() ) {
      return idx_done_void();
    }


    
    static int done() { return idx_done_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_void() {
      static int epidx = reg_redn_wrapper_done_void();
      return epidx;
    }
    
    static int redn_wrapper_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_void(); }
    
    static void _call_redn_wrapper_done_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void done();
 */
    
    void done(const CkEntryOptions *impl_e_opts=NULL);

};
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: array Block: ArrayElement{
Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
void pdgemmRun(double alpha, const CkCallback &done);
void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
Block(CkMigrateMessage* impl_msg);
};
 */
 class Block;
 class CkIndex_Block;
 class CProxy_Block;
 class CProxyElement_Block;
 class CProxySection_Block;
/* --------------- index object ------------------ */
class CkIndex_Block:public CkIndex_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
     */
    // Entry point registration at startup
    
    static int reg_Block_marshall1();
    // Entry point index lookup
    
    inline static int idx_Block_marshall1() {
      static int epidx = reg_Block_marshall1();
      return epidx;
    }

    
    static int ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks) { return idx_Block_marshall1(); }
    
    static void _call_Block_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Block_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Block_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Block_marshall1(PUP::er &p,void *msg);
    /* DECLS: void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
     */
    // Entry point registration at startup
    
    static int reg_pdgemmSendInput_marshall2();
    // Entry point index lookup
    
    inline static int idx_pdgemmSendInput_marshall2() {
      static int epidx = reg_pdgemmSendInput_marshall2();
      return epidx;
    }

    
    inline static int idx_pdgemmSendInput(void (Block::*)(const CProxy_Block &output, const bool &aOrB) ) {
      return idx_pdgemmSendInput_marshall2();
    }


    
    static int pdgemmSendInput(const CProxy_Block &output, const bool &aOrB) { return idx_pdgemmSendInput_marshall2(); }
    
    static void _call_pdgemmSendInput_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pdgemmSendInput_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_pdgemmSendInput_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_pdgemmSendInput_marshall2(PUP::er &p,void *msg);
    /* DECLS: void pdgemmRun(double alpha, const CkCallback &done);
     */
    // Entry point registration at startup
    
    static int reg_pdgemmRun_marshall3();
    // Entry point index lookup
    
    inline static int idx_pdgemmRun_marshall3() {
      static int epidx = reg_pdgemmRun_marshall3();
      return epidx;
    }

    
    inline static int idx_pdgemmRun(void (Block::*)(double alpha, const CkCallback &done) ) {
      return idx_pdgemmRun_marshall3();
    }


    
    static int pdgemmRun(double alpha, const CkCallback &done) { return idx_pdgemmRun_marshall3(); }
    
    static void _call_pdgemmRun_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pdgemmRun_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_pdgemmRun_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_pdgemmRun_marshall3(PUP::er &p,void *msg);
    /* DECLS: void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
     */
    // Entry point registration at startup
    
    static int reg_inputA_marshall4();
    // Entry point index lookup
    
    inline static int idx_inputA_marshall4() {
      static int epidx = reg_inputA_marshall4();
      return epidx;
    }

    
    inline static int idx_inputA(void (Block::*)(int blockIdA, const double *blockA, unsigned int M, unsigned int KA) ) {
      return idx_inputA_marshall4();
    }


    
    static int inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA) { return idx_inputA_marshall4(); }
    
    static void _call_inputA_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_inputA_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_inputA_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_inputA_marshall4(PUP::er &p,void *msg);
    /* DECLS: void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
     */
    // Entry point registration at startup
    
    static int reg_inputB_marshall5();
    // Entry point index lookup
    
    inline static int idx_inputB_marshall5() {
      static int epidx = reg_inputB_marshall5();
      return epidx;
    }

    
    inline static int idx_inputB(void (Block::*)(int blockIdB, const double *blockB, unsigned int KB, unsigned int N) ) {
      return idx_inputB_marshall5();
    }


    
    static int inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N) { return idx_inputB_marshall5(); }
    
    static void _call_inputB_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_inputB_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_inputB_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_inputB_marshall5(PUP::er &p,void *msg);
    /* DECLS: Block(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Block_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Block_CkMigrateMessage() {
      static int epidx = reg_Block_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Block_CkMigrateMessage(); }
    
    static void _call_Block_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Block_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Block : public CProxyElement_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    using array_index_t = CkArrayIndex2D;

    /* TRAM aggregators */

    CProxyElement_Block(void) {
    }
    CProxyElement_Block(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Block *ckLocal(void) const
    { return (Block *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex2D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex2D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
 */
    
    void insert(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
 */
    
    void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pdgemmRun(double alpha, const CkCallback &done);
 */
    
    void pdgemmRun(double alpha, const CkCallback &done, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
 */
    
    void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
 */
    
    void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Block : public CProxy_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    using array_index_t = CkArrayIndex2D;
    CProxy_Block(void) {
    }
    CProxy_Block(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_Block operator [] (const CkArrayIndex2D &idx) const
    { return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Block operator() (const CkArrayIndex2D &idx) const
    { return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Block operator () (int i0,int i1) const 
        {return CProxyElement_Block(ckGetArrayID(), CkArrayIndex2D(i0,i1), CK_DELCTOR_CALL);}
    CProxyElement_Block operator () (CkIndex2D idx) const 
        {return CProxyElement_Block(ckGetArrayID(), CkArrayIndex2D(idx), CK_DELCTOR_CALL);}
    CProxy_Block(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Block(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
 */
    
    static CkArrayID ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, const int s1, const int s2, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, const int s1, const int s2, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
 */
    
    void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pdgemmRun(double alpha, const CkCallback &done);
 */
    
    void pdgemmRun(double alpha, const CkCallback &done, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
 */
    
    void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
 */
    
    void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Block : public CProxySection_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    using array_index_t = CkArrayIndex2D;
    CProxySection_Block(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Block operator [] (const CkArrayIndex2D &idx) const
        {return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Block operator() (const CkArrayIndex2D &idx) const
        {return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Block operator () (int idx) const 
        {return CProxyElement_Block(ckGetArrayID(), *(CkArrayIndex2D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex2D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex2D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex2D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          al.emplace_back(i, j);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_Block(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Block(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Block(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Block(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Block(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Block(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Block(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
 */
    

/* DECLS: void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
 */
    
    void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pdgemmRun(double alpha, const CkCallback &done);
 */
    
    void pdgemmRun(double alpha, const CkCallback &done, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
 */
    
    void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
 */
    
    void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
#define Block_SDAG_CODE                                                        \
public:                                                                        \
  void pdgemmSendInput(CProxy_Block output, bool aOrB);                        \
  void pdgemmSendInput(Closure_Block::pdgemmSendInput_2_closure* gen0);        \
private:                                                                       \
  void pdgemmSendInput_end(Closure_Block::pdgemmSendInput_2_closure* gen0);    \
  void _slist_0(Closure_Block::pdgemmSendInput_2_closure* gen0);               \
  void _slist_0_end(Closure_Block::pdgemmSendInput_2_closure* gen0);           \
  void _serial_0(Closure_Block::pdgemmSendInput_2_closure* gen0);              \
public:                                                                        \
  void pdgemmRun(double alpha, CkCallback done);                               \
  void _sdag_fnc_pdgemmRun(double alpha, CkCallback done);                     \
  void _sdag_fnc_pdgemmRun(Closure_Block::pdgemmRun_3_closure* gen0);          \
private:                                                                       \
  void pdgemmRun_end(Closure_Block::pdgemmRun_3_closure* gen0);                \
  void _slist_1(Closure_Block::pdgemmRun_3_closure* gen0);                     \
  void _slist_1_end(Closure_Block::pdgemmRun_3_closure* gen0);                 \
  void _forall_0(Closure_Block::pdgemmRun_3_closure* gen0);                    \
  void _forall_0_end(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0);\
  void _slist_2(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0);\
  void _slist_2_end(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0);\
  SDAG::Continuation* _when_0(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0);\
  SDAG::Continuation* _when_0(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, int refnum_0, int refnum_1);\
  void _when_0_end(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, Closure_Block::inputA_4_closure* gen3, Closure_Block::inputB_5_closure* gen4);\
  void _serial_1(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, Closure_Block::inputA_4_closure* gen3, Closure_Block::inputB_5_closure* gen4);\
  void _serial_2(Closure_Block::pdgemmRun_3_closure* gen0);                    \
public:                                                                        \
  void inputA(Closure_Block::inputA_4_closure* genClosure);                    \
  void inputA(int blockIdA, double *blockA, unsigned int M, unsigned int KA);  \
  void inputB(Closure_Block::inputB_5_closure* genClosure);                    \
  void inputB(int blockIdB, double *blockB, unsigned int KB, unsigned int N);  \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Block_serial_0();                                       \
  static int _sdag_reg_Block_serial_0();                                       \
  static int _sdag_idx_Block_serial_1();                                       \
  static int _sdag_reg_Block_serial_1();                                       \
  static int _sdag_idx_Block_serial_2();                                       \
  static int _sdag_reg_Block_serial_2();                                       \

typedef CBaseT1<ArrayElementT<CkIndex2D>, CProxy_Block>CBase_Block;


/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct done_2_closure;

};

/* ---------------- method closures -------------- */
class Closure_Block {
  public:


    struct pdgemmSendInput_2_closure;


    struct pdgemmRun_3_closure;


    struct inputA_4_closure;


    struct inputB_5_closure;


};

extern void _registermatmul(void);
extern "C" void CkRegisterMainModule(void);
#endif
