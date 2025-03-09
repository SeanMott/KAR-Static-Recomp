//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_HSD_JObjSetupMatrixSub.hpp"
#include "fn_HSD_MtxGetScale.hpp"
#include "fn_HSD_MtxGetRotation.hpp"



void fn_8042BA68(PPC::Runtime::GCContext* context)
{
/*8042BA68 00428868*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8042BA6C 0042886C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042BA70 00428870*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042BA74 00428874*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8042BA78 00428878  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8042BA7C 0042887C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8042BA80 00428880*/ PPC::Runtime::ASM::beq(.L_8042BBC0);
/*8042BA84 00428884*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8042BA88 00428888*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 20, 20);
/*8042BA8C 0042888C*/ PPC::Runtime::ASM::bne(.L_8042BBC0);
/*8042BA90 00428890*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
/*8042BA94 00428894*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*8042BA98 00428898*/ PPC::Runtime::ASM::beq(.L_8042BBC0);
/*8042BA9C 0042889C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BAA0 004288A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8042BAA4 004288A4*/ PPC::Runtime::ASM::beq(.L_8042BBC0);
/*8042BAA8 004288A8*/ PPC::Runtime::ASM::beq(.L_8042BAEC);
/*8042BAAC 004288AC*/ PPC::Runtime::ASM::bne(.L_8042BAC0);
/*8042BAB0 004288B0*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_474 @ Get_MemoryOffset_SDA21);
/*8042BAB4 004288B4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8042BAB8 004288B8*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_473 @ Get_MemoryOffset_SDA21);
/*8042BABC 004288BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8042BAC0, 0x8042BAC0) //this is a jump label
/*8042BAC0 004288C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8042BAC4 004288C4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8042BAC8 004288C8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8042BACC 004288CC*/ PPC::Runtime::ASM::bne(.L_8042BADC);
/*8042BAD0 004288D0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8042BAD4 004288D4*/ PPC::Runtime::ASM::beq(.L_8042BADC);
/*8042BAD8 004288D8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8042BADC, 0x8042BADC) //this is a jump label
/*8042BADC 004288DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8042BAE0 004288E0*/ PPC::Runtime::ASM::beq(.L_8042BAEC);
/*8042BAE4 004288E4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8042BAE8 004288E8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_8042BAEC, 0x8042BAEC) //this is a jump label
/*8042BAEC 004288EC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
/*8042BAF0 004288F0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 22, 22);
/*8042BAF4 004288F4*/ PPC::Runtime::ASM::beq(.L_8042BB1C);
/*8042BAF8 004288F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BAFC 004288FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*8042BB00 00428900*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8042BB04 00428904*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BB08 00428908*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*8042BB0C 0042890C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8042BB10 00428910*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BB14 00428914*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*8042BB18 00428918*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8042BB1C, 0x8042BB1C) //this is a jump label
/*8042BB1C 0042891C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
/*8042BB20 00428920*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 20, 20);
/*8042BB24 00428924*/ PPC::Runtime::ASM::beq(.L_8042BB6C);
/*8042BB28 00428928*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8042BB2C 0042892C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8042BB30 00428930*/ PPC::Runtime::ASM::beq(.L_8042BB6C);
/*8042BB34 00428934*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8042BB38 00428938*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*8042BB3C 0042893C*/ PPC::Runtime::ASM::bne(.L_8042BB6C);
/*8042BB40 00428940*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BB44 00428944*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*8042BB48 00428948*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8042BB4C 0042894C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BB50 00428950*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8042BB54 00428954*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r4));
/*8042BB58 00428958*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8042BB5C 0042895C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BB60 00428960*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8042BB64 00428964*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r4));
/*8042BB68 00428968*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8042BB6C, 0x8042BB6C) //this is a jump label
/*8042BB6C 0042896C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
/*8042BB70 00428970*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*8042BB74 00428974*/ PPC::Runtime::ASM::beq(.L_8042BBA0);
/*8042BB78 00428978*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8042BB7C 0042897C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8042BB80 00428980*/ PPC::Runtime::ASM::beq(.L_8042BBA0);
/*8042BB84 00428984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8042BB88 00428988*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*8042BB8C 0042898C*/ PPC::Runtime::ASM::bne(.L_8042BBA0);
/*8042BB90 00428990*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BB94 00428994*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x24);
/*8042BB98 00428998*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x44);
/*8042BB9C 0042899C*/ PPC::Runtime::ASM::bl(fn_HSD_MtxGetScale);
RUNTIME_PPC_JUMP_LABEL(.L_8042BBA0, 0x8042BBA0) //this is a jump label
/*8042BBA0 004289A0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
/*8042BBA4 004289A4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 18, 18);
/*8042BBA8 004289A8*/ PPC::Runtime::ASM::beq(.L_8042BBC0);
/*8042BBAC 004289AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042BBB0 004289B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8042BBB4 004289B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x44);
/*8042BBB8 004289B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x14);
/*8042BBBC 004289BC*/ PPC::Runtime::ASM::bl(fn_HSD_MtxGetRotation);
RUNTIME_PPC_JUMP_LABEL(.L_8042BBC0, 0x8042BBC0) //this is a jump label
/*8042BBC0 004289C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042BBC4 004289C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8042BBC8 004289C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8042BBCC 004289CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042BBD0 004289D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8042BBD4 004289D4*/ PPC::Runtime::ASM::blr();
}