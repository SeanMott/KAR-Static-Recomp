//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80138204.hpp"
#include "fn_80071D7C.hpp"
#include "fn_8005E5D0.hpp"



void fn_glxSwapWaitDrawDone_TakeNoParams(PPC::Runtime::GCContext* context)
{
/*80045A44 00042844*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80045A48 00042848*/ PPC::Runtime::ASM::mflr(context->r0);
/*80045A4C 0004284C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80045A50 00042850*/ PPC::Runtime::ASM::bl(fn_80138204);
/*80045A54 00042854*/ PPC::Runtime::ASM::bl(fn_80071D7C);
/*80045A58 00042858*/ PPC::Runtime::ASM::bl(fn_8005E5D0);
/*80045A5C 0004285C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80045A60 00042860*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80045A64 00042864*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80045A68 00042868*/ PPC::Runtime::ASM::blr();
}