//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025BEE8(PPC::Runtime::GCContext* context)
{
/*8025BEE8 00258CE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025BEEC 00258CEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025BEF0 00258CF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BEF4 00258CF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025BEF8 00258CF8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025BEFC 00258CFC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025BF00 00258D00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025BF04 00258D04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025BF08 00258D08*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025BF0C 00258D0C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025BF10 00258D10*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025BF14 00258D14*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025BF18 00258D18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025BF1C 00258D1C*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025BF20 00258D20*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2EA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025BF24 00258D24*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025BF28 00258D28*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2EAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025BF2C 00258D2C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025BF30 00258D30*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025BF34 00258D34*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025BF38 00258D38*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025BF3C 00258D3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BF40 00258D40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025BF44 00258D44*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025BF48 00258D48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025BF4C 00258D4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025BF50 00258D50*/ PPC::Runtime::ASM::blr();
}