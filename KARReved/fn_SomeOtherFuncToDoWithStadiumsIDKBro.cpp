//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_strcmp.hpp"



void fn_SomeOtherFuncToDoWithStadiumsIDKBro(PPC::Runtime::GCContext* context)
{
/*8041E390 0041B190*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8041E394 0041B194*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041E398 0041B198*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8041E39C 0041B19C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041E3A0 0041B1A0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8041E3A4 0041B1A4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041E3A8 0041B1A8*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8041E3AC 0041B1AC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041E3B0 0041B1B0*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8041E3B4 0041B1B4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8041E3B8 0041B1B8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8041E3BC 0041B1BC*/ PPC::Runtime::ASM::b(.L_8041E404);
RUNTIME_PPC_JUMP_LABEL(.L_8041E3C0, 0x8041E3C0) //this is a jump label
/*8041E3C0 0041B1C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8041E3C4 0041B1C4*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x4);
/*8041E3C8 0041B1C8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*8041E3CC 0041B1CC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8041E3D0 0041B1D0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8041E3D4 0041B1D4*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r0);
/*8041E3D8 0041B1D8*/ PPC::Runtime::ASM::bl(fn_strcmp);
/*8041E3DC 0041B1DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8041E3E0 0041B1E0*/ PPC::Runtime::ASM::bne(.L_8041E3FC);
/*8041E3E4 0041B1E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8041E3E8 0041B1E8*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 3);
/*8041E3EC 0041B1EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*8041E3F0 0041B1F0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8041E3F4 0041B1F4*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*8041E3F8 0041B1F8*/ PPC::Runtime::ASM::b(.L_8041E414);
RUNTIME_PPC_JUMP_LABEL(.L_8041E3FC, 0x8041E3FC) //this is a jump label
/*8041E3FC 0041B1FC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x8);
/*8041E400 0041B200*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8041E404, 0x8041E404) //this is a jump label
/*8041E404 0041B204*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8041E408 0041B208*/ PPC::Runtime::ASM::cmplw(context->r30, context->r0);
/*8041E40C 0041B20C*/ PPC::Runtime::ASM::blt(.L_8041E3C0);
/*8041E410 0041B210*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8041E414, 0x8041E414) //this is a jump label
/*8041E414 0041B214*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8041E418 0041B218*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041E41C 0041B21C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041E420 0041B220*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041E424 0041B224*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8041E428 0041B228*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041E42C 0041B22C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8041E430 0041B230*/ PPC::Runtime::ASM::blr();
}