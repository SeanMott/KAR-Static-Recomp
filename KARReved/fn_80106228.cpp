//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800549A0.hpp"
#include "fn_killWhispy.hpp"



void fn_80106228(PPC::Runtime::GCContext* context)
{
/*80106228 00103028*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010622C 0010302C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80106230 00103030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80106234 00103034*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80106238 00103038*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010623C 0010303C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80106240 00103040*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80106244 00103044*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80106248 00103048*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r4));
/*8010624C 0010304C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80106250 00103050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80106254 00103054*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80106258 00103058*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r0);
/*8010625C 0010305C*/ PPC::Runtime::ASM::bl(fn_800549A0);
/*80106260 00103060*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80106264 00103064*/ PPC::Runtime::ASM::bne(.L_8010629C);
/*80106268 00103068*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8010626C 0010306C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80106270 00103070*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80106274 00103074*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80106278 00103078*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8010627C 0010307C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80106280 00103080*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80106284 00103084*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80106288 00103088*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8010628C 0010308C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*80106290 00103090*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r3));
/*80106294 00103094*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80106298 00103098*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_8010629C, 0x8010629C) //this is a jump label
/*8010629C 0010309C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801062A0 001030A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801062A4 001030A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801062A8 001030A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801062AC 001030AC*/ PPC::Runtime::ASM::blr();
}