//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_killWhispy.hpp"



void fn_800FC0A0(PPC::Runtime::GCContext* context)
{
/*800FC0A0 000F8EA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FC0A4 000F8EA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FC0A8 000F8EA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FC0AC 000F8EAC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FC0B0 000F8EB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FC0B4 000F8EB4*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*800FC0B8 000F8EB8*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*800FC0BC 000F8EBC*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*800FC0C0 000F8EC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FC0C4 000F8EC4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FC0C8 000F8EC8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FC0CC 000F8ECC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800FC0D0 000F8ED0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FC0D4 000F8ED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*800FC0D8 000F8ED8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r3));
/*800FC0DC 000F8EDC*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FC0E0 000F8EE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FC0E4 000F8EE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FC0E8 000F8EE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FC0EC 000F8EEC*/ PPC::Runtime::ASM::blr();
}