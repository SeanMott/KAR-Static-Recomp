//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80207DEC.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_801FED40.hpp"
#include "fn_801FC398.hpp"



void fn_8020EBB4(PPC::Runtime::GCContext* context)
{
/*8020EBB4 0020B9B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020EBB8 0020B9B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020EBBC 0020B9BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020EBC0 0020B9C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020EBC4 0020B9C4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020EBC8 0020B9C8*/ PPC::Runtime::ASM::bl(fn_80207DEC);
/*8020EBCC 0020B9CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8020EBD0 0020B9D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8020EBD4 0020B9D4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*8020EBD8 0020B9D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020EBDC 0020B9DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8020EBE0 0020B9E0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*8020EBE4 0020B9E4*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8020EBE8 0020B9E8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8020EBEC 0020B9EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020EBF0 0020B9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*8020EBF4 0020B9F4*/ PPC::Runtime::ASM::bl(fn_801FED40);
/*8020EBF8 0020B9F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2500 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020EBFC 0020B9FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020EC00 0020BA00*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2504 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020EC04 0020BA04*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8020EC08 0020BA08*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8020EC0C 0020BA0C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8020EC10 0020BA10*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8020EC14 0020BA14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020EC18 0020BA18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020EC1C 0020BA1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020EC20 0020BA20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020EC24 0020BA24*/ PPC::Runtime::ASM::blr();
}