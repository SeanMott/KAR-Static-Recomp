//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_killWhispy.hpp"



void fn_80100510(PPC::Runtime::GCContext* context)
{
/*80100510 000FD310*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80100514 000FD314*/ PPC::Runtime::ASM::mflr(context->r0);
/*80100518 000FD318*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010051C 000FD31C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80100520 000FD320*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r5));
/*80100524 000FD324*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80100528 000FD328*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r5));
/*8010052C 000FD32C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r5));
/*80100530 000FD330*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80100534 000FD334*/ PPC::Runtime::ASM::bgt(.L_80100564);
/*80100538 000FD338*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010053C 000FD33C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80100540 000FD340*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80100544 000FD344*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80100548 000FD348*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8010054C 000FD34C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80100550 000FD350*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF93C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80100554 000FD354*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80100558 000FD358*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*8010055C 000FD35C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80100560 000FD360*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_80100564, 0x80100564) //this is a jump label
/*80100564 000FD364*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80100568 000FD368*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010056C 000FD36C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80100570 000FD370*/ PPC::Runtime::ASM::blr();
}