//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80334534.hpp"



void fn_8032A36C(PPC::Runtime::GCContext* context)
{
/*8032A36C 0032716C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8032A370 00327170*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032A374 00327174*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8032A378 00327178*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8032A37C 0032717C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8032A380 00327180*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 8032A384 00327184  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8032A388 00327188*/ PPC::Runtime::ASM::beq(.L_8032A430);
/*8032A38C 0032718C*/ PPC::Runtime::ASM::beq(.L_8032A420);
/*8032A390 00327190*/ PPC::Runtime::ASM::beq(.L_8032A420);
/*8032A394 00327194*/ PPC::Runtime::ASM::beq(.L_8032A420);
/*8032A398 00327198*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0xc);
/*8032A39C 0032719C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8032A3A0 003271A0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8032A3A4 003271A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8032A3A8 003271A8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*8032A3AC 003271AC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*8032A3B0 003271B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8032A3B4 003271B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8032A3B8 003271B8*/ PPC::Runtime::ASM::bl(fn_80334534);
/*8032A3BC 003271BC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8032A3C0 003271C0*/ PPC::Runtime::ASM::beq(.L_8032A3F4);
/*8032A3C4 003271C4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8032A3C8 003271C8*/ PPC::Runtime::ASM::beq(.L_8032A3F4);
/*8032A3CC 003271CC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8032A3D0 003271D0*/ PPC::Runtime::ASM::beq(.L_8032A3F4);
/*8032A3D4 003271D4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*8032A3D8 003271D8*/ PPC::Runtime::ASM::beq(.L_8032A3F4);
/*8032A3DC 003271DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8032A3E0 003271E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8032A3E4 003271E4*/ PPC::Runtime::ASM::beq(.L_8032A3F4);
/*8032A3E8 003271E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8032A3EC 003271EC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD94C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032A3F0 003271F0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8032A3F4, 0x8032A3F4) //this is a jump label
/*8032A3F4 003271F4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8032A3F8 003271F8*/ PPC::Runtime::ASM::beq(.L_8032A420);
/*8032A3FC 003271FC*/ PPC::Runtime::ASM::beq(.L_8032A420);
/*8032A400 00327200*/ PPC::Runtime::ASM::beq(.L_8032A420);
/*8032A404 00327204*/ PPC::Runtime::ASM::beq(.L_8032A420);
/*8032A408 00327208*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032A40C 0032720C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8032A410 00327210*/ PPC::Runtime::ASM::beq(.L_8032A420);
/*8032A414 00327214*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8032A418 00327218*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD950 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032A41C 0032721C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8032A420, 0x8032A420) //this is a jump label
/*8032A420 00327220*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8032A424 00327224*/ PPC::Runtime::ASM::ble(.L_8032A430);
/*8032A428 00327228*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8032A42C 0032722C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8032A430, 0x8032A430) //this is a jump label
/*8032A430 00327230*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8032A434 00327234*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8032A438 00327238*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8032A43C 0032723C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8032A440 00327240*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032A444 00327244*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8032A448 00327248*/ PPC::Runtime::ASM::blr();
}