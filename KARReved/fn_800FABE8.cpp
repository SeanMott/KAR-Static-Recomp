//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"



void fn_800FABE8(PPC::Runtime::GCContext* context)
{
/*800FABE8 000F79E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FABEC 000F79EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FABF0 000F79F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FABF4 000F79F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FABF8 000F79F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FABFC 000F79FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FAC00 000F7A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800FAC04 000F7A04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800FAC08 000F7A08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FAC0C 000F7A0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FAC10 000F7A10*/ PPC::Runtime::ASM::ble(.L_800FAC20);
/*800FAC14 000F7A14*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*800FAC18 000F7A18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FAC1C 000F7A1C*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FAC20, 0x800FAC20) //this is a jump label
/*800FAC20 000F7A20*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FAC24 000F7A24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800FAC28 000F7A28*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800FAC2C 000F7A2C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FAC30 000F7A30*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FAC34 000F7A34*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF8D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FAC38 000F7A38*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*800FAC3C 000F7A3C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FAC40 000F7A40*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FAC44 000F7A44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FAC48 000F7A48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FAC4C 000F7A4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FAC50 000F7A50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FAC54 000F7A54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FAC58 000F7A58*/ PPC::Runtime::ASM::blr();
}