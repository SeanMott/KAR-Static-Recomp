//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"



void fn_80106548(PPC::Runtime::GCContext* context)
{
/*80106548 00103348*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010654C 0010334C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80106550 00103350*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80106554 00103354*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80106558 00103358*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010655C 0010335C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*80106560 00103360*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80106564 00103364*/ PPC::Runtime::ASM::ble(.L_80106574);
/*80106568 00103368*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*8010656C 0010336C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80106570 00103370*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_80106574, 0x80106574) //this is a jump label
/*80106574 00103374*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80106578 00103378*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010657C 0010337C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80106580 00103380*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80106584 00103384*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80106588 00103388*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8010658C 0010338C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80106590 00103390*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80106594 00103394*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*80106598 00103398*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010659C 0010339C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801065A0 001033A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801065A4 001033A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801065A8 001033A8*/ PPC::Runtime::ASM::blr();
}