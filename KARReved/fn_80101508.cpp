//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D7AD0.hpp"
#include "fn_8018CB28.hpp"
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"
#include "fn_801016B8.hpp"
#include "fn_801016B8.hpp"



void fn_80101508(PPC::Runtime::GCContext* context)
{
/*80101508 000FE308*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010150C 000FE30C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80101510 000FE310*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80101514 000FE314*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80101518 000FE318*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010151C 000FE31C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80101520 000FE320*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r5));
/*80101524 000FE324*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80101528 000FE328*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r5));
/*8010152C 000FE32C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r5));
/*80101530 000FE330*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80101534 000FE334*/ PPC::Runtime::ASM::bgt(.L_801015C8);
/*80101538 000FE338*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010153C 000FE33C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80101540 000FE340*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80101544 000FE344*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80101548 000FE348*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8010154C 000FE34C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80101550 000FE350*/ PPC::Runtime::ASM::beq(.L_8010156C);
/*80101554 000FE354*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80101558 000FE358*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8010155C 000FE35C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r5));
/*80101560 000FE360*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80101564 000FE364*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*80101568 000FE368*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
RUNTIME_PPC_JUMP_LABEL(.L_8010156C, 0x8010156C) //this is a jump label
/*8010156C 000FE36C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*80101570 000FE370*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80101574 000FE374*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
/*80101578 000FE378*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r30));
/*8010157C 000FE37C*/ PPC::Runtime::ASM::bl(fn_8018CB28);
/*80101580 000FE380*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*80101584 000FE384*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80101588 000FE388*/ PPC::Runtime::ASM::ble(.L_80101598);
/*8010158C 000FE38C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*80101590 000FE390*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80101594 000FE394*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_80101598, 0x80101598) //this is a jump label
/*80101598 000FE398*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF950 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010159C 000FE39C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801015A0 000FE3A0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801015A4 000FE3A4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801015A8 000FE3A8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801015AC 000FE3AC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801015B0 000FE3B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF954 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801015B4 000FE3B4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801015B8 000FE3B8*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*801015BC 000FE3BC*/ PPC::Runtime::ASM::lis(context->r3, fn_801016B8 @ Get_MemoryOffset_HighBit);
/*801015C0 000FE3C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801016B8 @ Get_MemoryOffset_LowBit);
/*801015C4 000FE3C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801015C8, 0x801015C8) //this is a jump label
/*801015C8 000FE3C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801015CC 000FE3CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801015D0 000FE3D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801015D4 000FE3D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801015D8 000FE3D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801015DC 000FE3DC*/ PPC::Runtime::ASM::blr();
}