//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801673F4(PPC::Runtime::GCContext* context)
{
/*801673F4 001641F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801673F8 001641F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801673FC 001641FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80167400 00164200*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80167404 00164204*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80167408 00164208*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016740C 0016420C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80167410 00164210*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80167414, 0x80167414) //this is a jump label
/*80167414 00164214*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80167418 00164218*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8016741C 0016421C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80167420 00164220*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80167424 00164224*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa34, context->r30));
/*80167428 00164228*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016742C 0016422C*/ PPC::Runtime::ASM::beq(.L_80167438);
/*80167430 00164230*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80167434 00164234*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa34, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80167438, 0x80167438) //this is a jump label
/*80167438 00164238*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8016743C 0016423C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80167440 00164240*/ PPC::Runtime::ASM::blt(.L_80167414);
/*80167444 00164244*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80167448 00164248*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016744C 0016424C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80167450 00164250*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80167454 00164254*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80167458 00164258*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016745C 0016425C*/ PPC::Runtime::ASM::blr();
}