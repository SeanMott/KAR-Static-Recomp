//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_802593B8(PPC::Runtime::GCContext* context)
{
/*802593B8 002561B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802593BC 002561BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802593C0 002561C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802593C4 002561C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802593C8 002561C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802593CC 002561CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802593D0 002561D0*/ PPC::Runtime::ASM::bl(fn_80250340);
/*802593D4 002561D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802593D8 002561D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802593DC 002561DC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802593E0 002561E0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*802593E4 002561E4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802593E8 002561E8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802593EC 002561EC*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*802593F0 002561F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802593F4 002561F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802593F8 002561F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802593FC 002561FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80259400 00256200*/ PPC::Runtime::ASM::blr();
}