
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::done_2_closure : public SDAG::Closure {
      

      done_2_closure() {
        init();
      }
      done_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~done_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::pdgemmSendInput_2_closure : public SDAG::Closure {
            CProxy_Block output;
            bool aOrB;


      pdgemmSendInput_2_closure() {
        init();
      }
      pdgemmSendInput_2_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_Block & getP0() { return output;}
            bool & getP1() { return aOrB;}
      void pup(PUP::er& __p) {
        __p | output;
        __p | aOrB;
        packClosure(__p);
      }
      virtual ~pdgemmSendInput_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(pdgemmSendInput_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::pdgemmRun_3_closure : public SDAG::Closure {
            double alpha;
            CkCallback done;


      pdgemmRun_3_closure() {
        init();
      }
      pdgemmRun_3_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return alpha;}
            CkCallback & getP1() { return done;}
      void pup(PUP::er& __p) {
        __p | alpha;
        __p | done;
        packClosure(__p);
      }
      virtual ~pdgemmRun_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(pdgemmRun_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::inputA_4_closure : public SDAG::Closure {
            int blockIdA;
            double *blockA;
            unsigned int M;
            unsigned int KA;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      inputA_4_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      inputA_4_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return blockIdA;}
            double *& getP1() { return blockA;}
            unsigned int & getP2() { return M;}
            unsigned int & getP3() { return KA;}
      void pup(PUP::er& __p) {
        __p | blockIdA;
        __p | M;
        __p | KA;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> blockIdA;
  implP|blockIdA;
  int impl_off_blockA, impl_cnt_blockA;
  implP|impl_off_blockA;
  implP|impl_cnt_blockA;
  PUP::detail::TemporaryObjectHolder<unsigned int> M;
  implP|M;
  PUP::detail::TemporaryObjectHolder<unsigned int> KA;
  implP|KA;
          impl_buf+=CK_ALIGN(implP.size(),16);
          blockA = (double *)(impl_buf+impl_off_blockA);
        }
      }
      virtual ~inputA_4_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(inputA_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::inputB_5_closure : public SDAG::Closure {
            int blockIdB;
            double *blockB;
            unsigned int KB;
            unsigned int N;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      inputB_5_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      inputB_5_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return blockIdB;}
            double *& getP1() { return blockB;}
            unsigned int & getP2() { return KB;}
            unsigned int & getP3() { return N;}
      void pup(PUP::er& __p) {
        __p | blockIdB;
        __p | KB;
        __p | N;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> blockIdB;
  implP|blockIdB;
  int impl_off_blockB, impl_cnt_blockB;
  implP|impl_off_blockB;
  implP|impl_cnt_blockB;
  PUP::detail::TemporaryObjectHolder<unsigned int> KB;
  implP|KB;
  PUP::detail::TemporaryObjectHolder<unsigned int> N;
  implP|N;
          impl_buf+=CK_ALIGN(implP.size(),16);
          blockB = (double *)(impl_buf+impl_off_blockB);
        }
      }
      virtual ~inputB_5_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(inputB_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  new (impl_obj_void) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done();
 */
void CProxy_Main::done(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_done_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->done();
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Main::reg_done_void() {
  int epidx = CkRegisterEp("done()",
      reinterpret_cast<CkCallFnPtr>(_call_done_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_done_void() {
  return CkRegisterEp("redn_wrapper_done(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_done_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_done_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->done();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::done_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void done();
  idx_done_void();
  idx_redn_wrapper_done_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Block: ArrayElement{
Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
void pdgemmRun(double alpha, const CkCallback &done);
void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
Block(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Block::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Block::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Block::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Block::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Block::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Block::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Block::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
 */
void CProxyElement_Block::insert(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const bool &randomInit, unsigned int blockSize, unsigned int numBlocks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Block::idx_Block_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
 */
void CProxyElement_Block::pdgemmSendInput(const CProxy_Block &output, const bool &aOrB, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_Block &output, const bool &aOrB
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)output;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)aOrB;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)output;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)aOrB;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_pdgemmSendInput_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pdgemmRun(double alpha, const CkCallback &done);
 */
void CProxyElement_Block::pdgemmRun(double alpha, const CkCallback &done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double alpha, const CkCallback &done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|alpha;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|alpha;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)done;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_pdgemmRun_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
 */
void CProxyElement_Block::inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int blockIdA, const double *blockA, unsigned int M, unsigned int KA
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_blockA, impl_cnt_blockA;
  impl_off_blockA=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_blockA=sizeof(double)*(M*KA));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|blockIdA;
    implP|impl_off_blockA;
    implP|impl_cnt_blockA;
    implP|M;
    implP|KA;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|blockIdA;
    implP|impl_off_blockA;
    implP|impl_cnt_blockA;
    implP|M;
    implP|KA;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_blockA,blockA,impl_cnt_blockA);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_inputA_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
 */
void CProxyElement_Block::inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int blockIdB, const double *blockB, unsigned int KB, unsigned int N
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_blockB, impl_cnt_blockB;
  impl_off_blockB=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_blockB=sizeof(double)*(KB*N));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|blockIdB;
    implP|impl_off_blockB;
    implP|impl_cnt_blockB;
    implP|KB;
    implP|N;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|blockIdB;
    implP|impl_off_blockB;
    implP|impl_cnt_blockB;
    implP|KB;
    implP|N;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_blockB,blockB,impl_cnt_blockB);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_inputB_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
 */
CkArrayID CProxy_Block::ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const bool &randomInit, unsigned int blockSize, unsigned int numBlocks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Block::idx_Block_marshall1(), opts);
  return gId;
}
void CProxy_Block::ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const bool &randomInit, unsigned int blockSize, unsigned int numBlocks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Block::idx_Block_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Block::ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, const int s1, const int s2, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const bool &randomInit, unsigned int blockSize, unsigned int numBlocks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
  }
  CkArrayOptions opts(s1, s2);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Block::idx_Block_marshall1(), opts);
  return gId;
}
void CProxy_Block::ckNew(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks, const int s1, const int s2, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const bool &randomInit, unsigned int blockSize, unsigned int numBlocks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)randomInit;
    implP|blockSize;
    implP|numBlocks;
  }
  CkArrayOptions opts(s1, s2);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Block::idx_Block_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Block::reg_Block_marshall1() {
  int epidx = CkRegisterEp("Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks)",
      reinterpret_cast<CkCallFnPtr>(_call_Block_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Block_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Block_marshall1);

  return epidx;
}

void CkIndex_Block::_call_Block_marshall1(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &randomInit, unsigned int blockSize, unsigned int numBlocks*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> randomInit;
  implP|randomInit;
  PUP::detail::TemporaryObjectHolder<unsigned int> blockSize;
  implP|blockSize;
  PUP::detail::TemporaryObjectHolder<unsigned int> numBlocks;
  implP|numBlocks;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Block(std::move(randomInit.t), std::move(blockSize.t), std::move(numBlocks.t));
}
int CkIndex_Block::_callmarshall_Block_marshall1(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &randomInit, unsigned int blockSize, unsigned int numBlocks*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> randomInit;
  implP|randomInit;
  PUP::detail::TemporaryObjectHolder<unsigned int> blockSize;
  implP|blockSize;
  PUP::detail::TemporaryObjectHolder<unsigned int> numBlocks;
  implP|numBlocks;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Block(std::move(randomInit.t), std::move(blockSize.t), std::move(numBlocks.t));
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_Block_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &randomInit, unsigned int blockSize, unsigned int numBlocks*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> randomInit;
  implP|randomInit;
  PUP::detail::TemporaryObjectHolder<unsigned int> blockSize;
  implP|blockSize;
  PUP::detail::TemporaryObjectHolder<unsigned int> numBlocks;
  implP|numBlocks;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("randomInit");
  implDestP|randomInit;
  if (implDestP.hasComments()) implDestP.comment("blockSize");
  implDestP|blockSize;
  if (implDestP.hasComments()) implDestP.comment("numBlocks");
  implDestP|numBlocks;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
 */
void CProxy_Block::pdgemmSendInput(const CProxy_Block &output, const bool &aOrB, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_Block &output, const bool &aOrB
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)output;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)aOrB;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)output;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)aOrB;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_pdgemmSendInput_marshall2(),0);
}

// Entry point registration function
int CkIndex_Block::reg_pdgemmSendInput_marshall2() {
  int epidx = CkRegisterEp("pdgemmSendInput(const CProxy_Block &output, const bool &aOrB)",
      reinterpret_cast<CkCallFnPtr>(_call_pdgemmSendInput_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_pdgemmSendInput_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_pdgemmSendInput_marshall2);

  return epidx;
}

void CkIndex_Block::_call_pdgemmSendInput_marshall2(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::pdgemmSendInput_2_closure* genClosure = new Closure_Block::pdgemmSendInput_2_closure();
  implP|genClosure->output;
  implP|genClosure->aOrB;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->pdgemmSendInput(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_pdgemmSendInput_marshall2(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::pdgemmSendInput_2_closure* genClosure = new Closure_Block::pdgemmSendInput_2_closure();
  implP|genClosure->output;
  implP|genClosure->aOrB;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->pdgemmSendInput(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_pdgemmSendInput_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_Block &output, const bool &aOrB*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Block> output;
  implP|output;
  PUP::detail::TemporaryObjectHolder<bool> aOrB;
  implP|aOrB;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("output");
  implDestP|output;
  if (implDestP.hasComments()) implDestP.comment("aOrB");
  implDestP|aOrB;
}
PUPable_def(SINGLE_ARG(Closure_Block::pdgemmSendInput_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pdgemmRun(double alpha, const CkCallback &done);
 */
void CProxy_Block::pdgemmRun(double alpha, const CkCallback &done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double alpha, const CkCallback &done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|alpha;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|alpha;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)done;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_pdgemmRun_marshall3(),0);
}

// Entry point registration function
int CkIndex_Block::reg_pdgemmRun_marshall3() {
  int epidx = CkRegisterEp("pdgemmRun(double alpha, const CkCallback &done)",
      reinterpret_cast<CkCallFnPtr>(_call_pdgemmRun_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_pdgemmRun_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_pdgemmRun_marshall3);

  return epidx;
}

void CkIndex_Block::_call_pdgemmRun_marshall3(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::pdgemmRun_3_closure* genClosure = new Closure_Block::pdgemmRun_3_closure();
  implP|genClosure->alpha;
  implP|genClosure->done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_pdgemmRun(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_pdgemmRun_marshall3(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::pdgemmRun_3_closure* genClosure = new Closure_Block::pdgemmRun_3_closure();
  implP|genClosure->alpha;
  implP|genClosure->done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_pdgemmRun(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_pdgemmRun_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double alpha, const CkCallback &done*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> alpha;
  implP|alpha;
  PUP::detail::TemporaryObjectHolder<CkCallback> done;
  implP|done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("alpha");
  implDestP|alpha;
  if (implDestP.hasComments()) implDestP.comment("done");
  implDestP|done;
}
PUPable_def(SINGLE_ARG(Closure_Block::pdgemmRun_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
 */
void CProxy_Block::inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int blockIdA, const double *blockA, unsigned int M, unsigned int KA
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_blockA, impl_cnt_blockA;
  impl_off_blockA=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_blockA=sizeof(double)*(M*KA));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|blockIdA;
    implP|impl_off_blockA;
    implP|impl_cnt_blockA;
    implP|M;
    implP|KA;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|blockIdA;
    implP|impl_off_blockA;
    implP|impl_cnt_blockA;
    implP|M;
    implP|KA;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_blockA,blockA,impl_cnt_blockA);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_inputA_marshall4(),0);
}

// Entry point registration function
int CkIndex_Block::reg_inputA_marshall4() {
  int epidx = CkRegisterEp("inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA)",
      reinterpret_cast<CkCallFnPtr>(_call_inputA_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_inputA_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_inputA_marshall4);

  return epidx;
}

void CkIndex_Block::_call_inputA_marshall4(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::inputA_4_closure* genClosure = new Closure_Block::inputA_4_closure();
  implP|genClosure->blockIdA;
  int impl_off_blockA, impl_cnt_blockA;
  implP|impl_off_blockA;
  implP|impl_cnt_blockA;
  implP|genClosure->M;
  implP|genClosure->KA;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->blockA = (double *)(impl_buf+impl_off_blockA);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  impl_obj->inputA(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_inputA_marshall4(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::inputA_4_closure* genClosure = new Closure_Block::inputA_4_closure();
  implP|genClosure->blockIdA;
  int impl_off_blockA, impl_cnt_blockA;
  implP|impl_off_blockA;
  implP|impl_cnt_blockA;
  implP|genClosure->M;
  implP|genClosure->KA;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->blockA = (double *)(impl_buf+impl_off_blockA);
  impl_obj->inputA(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_inputA_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int blockIdA, const double *blockA, unsigned int M, unsigned int KA*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> blockIdA;
  implP|blockIdA;
  int impl_off_blockA, impl_cnt_blockA;
  implP|impl_off_blockA;
  implP|impl_cnt_blockA;
  PUP::detail::TemporaryObjectHolder<unsigned int> M;
  implP|M;
  PUP::detail::TemporaryObjectHolder<unsigned int> KA;
  implP|KA;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *blockA=(double *)(impl_buf+impl_off_blockA);
  if (implDestP.hasComments()) implDestP.comment("blockIdA");
  implDestP|blockIdA;
  if (implDestP.hasComments()) implDestP.comment("blockA");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*blockA))<impl_cnt_blockA;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|blockA[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("M");
  implDestP|M;
  if (implDestP.hasComments()) implDestP.comment("KA");
  implDestP|KA;
}
PUPable_def(SINGLE_ARG(Closure_Block::inputA_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
 */
void CProxy_Block::inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int blockIdB, const double *blockB, unsigned int KB, unsigned int N
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_blockB, impl_cnt_blockB;
  impl_off_blockB=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_blockB=sizeof(double)*(KB*N));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|blockIdB;
    implP|impl_off_blockB;
    implP|impl_cnt_blockB;
    implP|KB;
    implP|N;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|blockIdB;
    implP|impl_off_blockB;
    implP|impl_cnt_blockB;
    implP|KB;
    implP|N;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_blockB,blockB,impl_cnt_blockB);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_inputB_marshall5(),0);
}

// Entry point registration function
int CkIndex_Block::reg_inputB_marshall5() {
  int epidx = CkRegisterEp("inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N)",
      reinterpret_cast<CkCallFnPtr>(_call_inputB_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_inputB_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_inputB_marshall5);

  return epidx;
}

void CkIndex_Block::_call_inputB_marshall5(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::inputB_5_closure* genClosure = new Closure_Block::inputB_5_closure();
  implP|genClosure->blockIdB;
  int impl_off_blockB, impl_cnt_blockB;
  implP|impl_off_blockB;
  implP|impl_cnt_blockB;
  implP|genClosure->KB;
  implP|genClosure->N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->blockB = (double *)(impl_buf+impl_off_blockB);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  impl_obj->inputB(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_inputB_marshall5(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::inputB_5_closure* genClosure = new Closure_Block::inputB_5_closure();
  implP|genClosure->blockIdB;
  int impl_off_blockB, impl_cnt_blockB;
  implP|impl_off_blockB;
  implP|impl_cnt_blockB;
  implP|genClosure->KB;
  implP|genClosure->N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->blockB = (double *)(impl_buf+impl_off_blockB);
  impl_obj->inputB(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_inputB_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int blockIdB, const double *blockB, unsigned int KB, unsigned int N*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> blockIdB;
  implP|blockIdB;
  int impl_off_blockB, impl_cnt_blockB;
  implP|impl_off_blockB;
  implP|impl_cnt_blockB;
  PUP::detail::TemporaryObjectHolder<unsigned int> KB;
  implP|KB;
  PUP::detail::TemporaryObjectHolder<unsigned int> N;
  implP|N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *blockB=(double *)(impl_buf+impl_off_blockB);
  if (implDestP.hasComments()) implDestP.comment("blockIdB");
  implDestP|blockIdB;
  if (implDestP.hasComments()) implDestP.comment("blockB");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*blockB))<impl_cnt_blockB;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|blockB[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("KB");
  implDestP|KB;
  if (implDestP.hasComments()) implDestP.comment("N");
  implDestP|N;
}
PUPable_def(SINGLE_ARG(Closure_Block::inputB_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Block::reg_Block_CkMigrateMessage() {
  int epidx = CkRegisterEp("Block(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Block_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Block::_call_Block_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Block> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
 */
void CProxySection_Block::pdgemmSendInput(const CProxy_Block &output, const bool &aOrB, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_Block &output, const bool &aOrB
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)output;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)aOrB;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)output;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)aOrB;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_pdgemmSendInput_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pdgemmRun(double alpha, const CkCallback &done);
 */
void CProxySection_Block::pdgemmRun(double alpha, const CkCallback &done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double alpha, const CkCallback &done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|alpha;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|alpha;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)done;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_pdgemmRun_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
 */
void CProxySection_Block::inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int blockIdA, const double *blockA, unsigned int M, unsigned int KA
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_blockA, impl_cnt_blockA;
  impl_off_blockA=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_blockA=sizeof(double)*(M*KA));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|blockIdA;
    implP|impl_off_blockA;
    implP|impl_cnt_blockA;
    implP|M;
    implP|KA;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|blockIdA;
    implP|impl_off_blockA;
    implP|impl_cnt_blockA;
    implP|M;
    implP|KA;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_blockA,blockA,impl_cnt_blockA);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_inputA_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
 */
void CProxySection_Block::inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int blockIdB, const double *blockB, unsigned int KB, unsigned int N
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_blockB, impl_cnt_blockB;
  impl_off_blockB=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_blockB=sizeof(double)*(KB*N));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|blockIdB;
    implP|impl_off_blockB;
    implP|impl_cnt_blockB;
    implP|KB;
    implP|N;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|blockIdB;
    implP|impl_off_blockB;
    implP|impl_cnt_blockB;
    implP|KB;
    implP|N;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_blockB,blockB,impl_cnt_blockB);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_inputB_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Block::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 2);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
  idx_Block_marshall1();

  // REG: void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
  idx_pdgemmSendInput_marshall2();

  // REG: void pdgemmRun(double alpha, const CkCallback &done);
  idx_pdgemmRun_marshall3();

  // REG: void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
  idx_inputA_marshall4();

  // REG: void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
  idx_inputB_marshall5();

  // REG: Block(CkMigrateMessage* impl_msg);
  idx_Block_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Block_CkMigrateMessage());

  Block::__sdag_register(); // Potentially missing Block_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Block::pdgemmSendInput(CProxy_Block output, bool aOrB){
  Closure_Block::pdgemmSendInput_2_closure* genClosure = new Closure_Block::pdgemmSendInput_2_closure();
  genClosure->getP0() = output;
  genClosure->getP1() = aOrB;
  pdgemmSendInput(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::pdgemmSendInput(Closure_Block::pdgemmSendInput_2_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::pdgemmSendInput_end(Closure_Block::pdgemmSendInput_2_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_0(Closure_Block::pdgemmSendInput_2_closure* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_0_end(Closure_Block::pdgemmSendInput_2_closure* gen0) {
  pdgemmSendInput_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_0(Closure_Block::pdgemmSendInput_2_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_0()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    CProxy_Block& output = gen0->getP0();
    bool& aOrB = gen0->getP1();
    { // begin serial block
#line 10 "matmul.ci"

        if (aOrB)
          output((thisIndex.x-thisIndex.y+numBlocks)%numBlocks, thisIndex.y).inputA(0, data, blockSize, blockSize);
        else
          output(thisIndex.x, (thisIndex.y-thisIndex.x+numBlocks)%numBlocks).inputB(0, data, blockSize, blockSize);
      
#line 1385 "matmul.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::pdgemmRun(double alpha, CkCallback done){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "pdgemmRun(double alpha, CkCallback done)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_pdgemmRun(double alpha, CkCallback done){
  Closure_Block::pdgemmRun_3_closure* genClosure = new Closure_Block::pdgemmRun_3_closure();
  genClosure->getP0() = alpha;
  genClosure->getP1() = done;
  _sdag_fnc_pdgemmRun(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_pdgemmRun(Closure_Block::pdgemmRun_3_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_1(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::pdgemmRun_end(Closure_Block::pdgemmRun_3_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_1(Closure_Block::pdgemmRun_3_closure* gen0) {
  _forall_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_1_end(Closure_Block::pdgemmRun_3_closure* gen0) {
  pdgemmRun_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_forall_0(Closure_Block::pdgemmRun_3_closure* gen0) {
  {
    double& alpha = gen0->getP0();
    CkCallback& done = gen0->getP1();
  int __first = (0), __last = (numBlocks-1), __stride = (1);
  SDAG::CCounter *_cf0 = new SDAG::CCounter(__first, __last, __stride);
  if (__first > __last) {
    for(int block=__first;block>=__last;block+=__stride) {
      SDAG::ForallClosure* block_cl = new SDAG::ForallClosure(block);
      _slist_2(gen0, block_cl, _cf0);
    }
  } else {
    for(int block=__first;block<=__last;block+=__stride) {
      SDAG::ForallClosure* block_cl = new SDAG::ForallClosure(block);
      _slist_2(gen0, block_cl, _cf0);
    }
  }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_forall_0_end(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0) {
  _cf0->decrement(); /* DECREMENT 1 */ 
  block_cl->deref();
  if (_cf0->isDone()) {
    _cf0->deref();
    _serial_2(gen0);
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_2(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0) {
  _when_0(gen0, block_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_2_end(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0) {
  _forall_0_end(gen0, block_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_0(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0) {
  CMK_REFNUM_TYPE refnum_0;
  CMK_REFNUM_TYPE refnum_1;
  {
    double& alpha = gen0->getP0();
    CkCallback& done = gen0->getP1();
    {
      int& block = block_cl->getP0();
      {
        {
          refnum_0 = block;
          refnum_1 = block;
        }
      }
    }
  }
  return _when_0(gen0, block_cl, _cf0, refnum_0, refnum_1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_0(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, int refnum_0, int refnum_1) {
  std::unordered_set<SDAG::Buffer*> ignore;
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, &ignore);
  if (buf0) ignore.insert(buf0);
  SDAG::Buffer* buf1 = __dep->tryFindMessage(1, true, refnum_1, &ignore);
  if (buf0 && buf1) {
    __dep->removeMessage(buf0);
    __dep->removeMessage(buf1);
    _serial_1(gen0, block_cl, _cf0, static_cast<Closure_Block::inputA_4_closure*>(buf0->cl), static_cast<Closure_Block::inputB_5_closure*>(buf1->cl));
    delete buf0;
    delete buf1;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(gen0);
    c->addClosure(block_cl);
    c->addClosure(_cf0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    c->entries.push_back(1);
    c->refnums.push_back(refnum_1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_0_end(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, Closure_Block::inputA_4_closure* gen3, Closure_Block::inputB_5_closure* gen4) {
  _slist_2_end(gen0, block_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_1(Closure_Block::pdgemmRun_3_closure* gen0, SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, Closure_Block::inputA_4_closure* gen3, Closure_Block::inputB_5_closure* gen4) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_1()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    double& alpha = gen0->getP0();
    CkCallback& done = gen0->getP1();
    {
      int& block = block_cl->getP0();
      {
        {
          int& blockIdA = gen3->getP0();
          double*& blockA = gen3->getP1();
          unsigned int& M = gen3->getP2();
          unsigned int& KA = gen3->getP3();
          {
            int& blockIdB = gen4->getP0();
            double*& blockB = gen4->getP1();
            unsigned int& KB = gen4->getP2();
            unsigned int& N = gen4->getP3();
            { // begin serial block
#line 22 "matmul.ci"

          CkAssert(KA == KB);
          example_dgemm(M, N, KA,
                        alpha,
                        blockA, blockB, data);
          if (blockIdA != numBlocks) {
            int destX = (thisIndex.x + 1) % numBlocks;
            int destY = thisIndex.y;
            thisProxy(destX, destY).inputA(blockIdA+1, blockA, M, KA);
          }
          if (blockIdB != numBlocks) {
            int destX = thisIndex.x;
            int destY = (thisIndex.y + 1) % numBlocks;
            thisProxy(destX, destY).inputB(blockIdB+1, blockB, KB, N);
          }
        
#line 1585 "matmul.def.h"
            } // end serial block
          }
        }
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, block_cl, _cf0, gen3, gen4);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_2(Closure_Block::pdgemmRun_3_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_2()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    double& alpha = gen0->getP0();
    CkCallback& done = gen0->getP1();
    { // begin serial block
#line 39 "matmul.ci"

        contribute(done);
      
#line 1609 "matmul.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::inputA(int blockIdA, double *blockA, unsigned int M, unsigned int KA){
  Closure_Block::inputA_4_closure* genClosure = new Closure_Block::inputA_4_closure();
  genClosure->getP0() = blockIdA;
  genClosure->getP1() = blockA;
  genClosure->getP2() = M;
  genClosure->getP3() = KA;
  inputA(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::inputA(Closure_Block::inputA_4_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(0, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<Closure_Block::pdgemmRun_3_closure*>(c->closure[0]), 
      static_cast<SDAG::ForallClosure*>(c->closure[1]), 
      static_cast<SDAG::CCounter*>(c->closure[2]), 
      c->refnums[0], 
      c->refnums[1]
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::inputB(int blockIdB, double *blockB, unsigned int KB, unsigned int N){
  Closure_Block::inputB_5_closure* genClosure = new Closure_Block::inputB_5_closure();
  genClosure->getP0() = blockIdB;
  genClosure->getP1() = blockB;
  genClosure->getP2() = KB;
  genClosure->getP3() = N;
  inputB(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::inputB(Closure_Block::inputB_5_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(1, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<Closure_Block::pdgemmRun_3_closure*>(c->closure[0]), 
      static_cast<SDAG::ForallClosure*>(c->closure[1]), 
      static_cast<SDAG::CCounter*>(c->closure[2]), 
      c->refnums[0], 
      c->refnums[1]
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_init() { // Potentially missing Block_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(2,1));
  __dep->addDepends(0,0);
  __dep->addDepends(0,1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::__sdag_init() { // Potentially missing Block_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_pup(PUP::er &p) {  // Potentially missing Block_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::__sdag_register() { // Potentially missing Block_SDAG_CODE in your class definition?
  (void)_sdag_idx_Block_serial_0();
  (void)_sdag_idx_Block_serial_1();
  (void)_sdag_idx_Block_serial_2();
  PUPable_reg(SINGLE_ARG(Closure_Block::pdgemmSendInput_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::pdgemmRun_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::inputA_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::inputB_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::pdgemmSendInput_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::pdgemmRun_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::inputA_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::inputB_5_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_0() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_0() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_0", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_1() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_1() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_1", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_2() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_2() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_2", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registermatmul(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done();
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array Block: ArrayElement{
Block(const bool &randomInit, unsigned int blockSize, unsigned int numBlocks);
void pdgemmSendInput(const CProxy_Block &output, const bool &aOrB);
void pdgemmRun(double alpha, const CkCallback &done);
void inputA(int blockIdA, const double *blockA, unsigned int M, unsigned int KA);
void inputB(int blockIdB, const double *blockB, unsigned int KB, unsigned int N);
Block(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Block::__register("Block", sizeof(Block));

}
extern "C" void CkRegisterMainModule(void) {
  _registermatmul();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main>(dynamic_cast<Main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Block::virtual_pup(PUP::er &p) {
    recursive_pup<Block>(dynamic_cast<Block*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
