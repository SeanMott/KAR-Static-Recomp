//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800547E0.hpp"
#include "fn_800EA180.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800F7870.hpp"



void fn_80103488(PPC::Runtime::GCContext* context)
{
/*80103488 00100288*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8010348C 0010028C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80103490 00100290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80103494 00100294*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80103498 00100298*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8010349C 0010029C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801034A0 001002A0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*801034A4 001002A4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801034A8 001002A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801034AC 001002AC*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801034B0 001002B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r28));
/*801034B4 001002B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/* 801034B8 001002B8  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801034BC 001002BC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801034C0 001002C0*/ PPC::Runtime::ASM::beq(.L_80103578);
/*801034C4 001002C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r28));
/*801034C8 001002C8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801034CC 001002CC*/ PPC::Runtime::ASM::bne(.L_801034D8);
/*801034D0 001002D0*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801034D4 001002D4*/ PPC::Runtime::ASM::b(.L_8010353C);
RUNTIME_PPC_JUMP_LABEL(.L_801034D8, 0x801034D8) //this is a jump label
/*801034D8 001002D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*801034DC 001002DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*801034E0 001002E0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801034E4 001002E4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801034E8 001002E8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801034EC 001002EC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801034F0 001002F0*/ PPC::Runtime::ASM::bne(.L_80103508);
/*801034F4 001002F4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1016 @ Get_MemoryOffset_HighBit);
/*801034F8 001002F8*/ PPC::Runtime::ASM::li(context->r4, 0x8d);
/*801034FC 001002FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1016 @ Get_MemoryOffset_LowBit);
/*80103500 00100300*/ PPC::Runtime::ASM::li(context->r5, lbl_805D62C8 @ Get_MemoryOffset_SDA21);
/*80103504 00100304*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80103508, 0x80103508) //this is a jump label
/*80103508 00100308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r28));
/*8010350C 0010030C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80103510 00100310*/ PPC::Runtime::ASM::bne(.L_8010351C);
/*80103514 00100314*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80103518 00100318*/ PPC::Runtime::ASM::b(.L_8010353C);
RUNTIME_PPC_JUMP_LABEL(.L_8010351C, 0x8010351C) //this is a jump label
/*8010351C 0010031C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80103520 00100320*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80103524 00100324*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103528 00100328*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8010352C 0010032C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*80103530 00100330*/ PPC::Runtime::ASM::bge(.L_80103538);
/*80103534 00100334*/ PPC::Runtime::ASM::b(.L_8010353C);
RUNTIME_PPC_JUMP_LABEL(.L_80103538, 0x80103538) //this is a jump label
/*80103538 00100338*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8010353C, 0x8010353C) //this is a jump label
/*8010353C 0010033C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r28));
/*80103540 00100340*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80103544 00100344*/ PPC::Runtime::ASM::ble(.L_80103554);
/*80103548 00100348*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x118);
/*8010354C 0010034C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80103550 00100350*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_80103554, 0x80103554) //this is a jump label
/*80103554 00100354*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80103558 00100358*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8010355C 0010035C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80103560 00100360*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80103564 00100364*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80103568 00100368*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010356C 0010036C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103570 00100370*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80103574 00100374*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_80103578, 0x80103578) //this is a jump label
/*80103578 00100378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8010357C 0010037C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*80103580 00100380*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80103584 00100384*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*80103588 00100388*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*8010358C 0010038C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80103590 00100390*/ PPC::Runtime::ASM::bne(.L_801035D8);
/*80103594 00100394*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80103598 00100398*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*8010359C 0010039C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801035A0 001003A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801035A4 001003A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801035A8 001003A8*/ PPC::Runtime::ASM::ble(.L_801035B4);
/*801035AC 001003AC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*801035B0 001003B0*/ PPC::Runtime::ASM::bl(fn_800EA180);
RUNTIME_PPC_JUMP_LABEL(.L_801035B4, 0x801035B4) //this is a jump label
/*801035B4 001003B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801035B8 001003B8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801035BC 001003BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801035C0 001003C0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801035C4 001003C4*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801035C8 001003C8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801035CC 001003CC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801035D0 001003D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801035D4 001003D4*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_801035D8, 0x801035D8) //this is a jump label
/*801035D8 001003D8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801035DC 001003DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801035E0 001003E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*801035E4 001003E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r5));
/*801035E8 001003E8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801035EC 001003EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801035F0 001003F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r5));
/*801035F4 001003F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*801035F8 001003F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801035FC 001003FC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80103600 00100400*/ PPC::Runtime::ASM::beq(.L_80103614);
/*80103604 00100404*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80103608 00100408*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010360C 0010040C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80103610 00100410*/ PPC::Runtime::ASM::bl(fn_800F7870);
RUNTIME_PPC_JUMP_LABEL(.L_80103614, 0x80103614) //this is a jump label
/*80103614 00100414*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80103618 00100418*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8010361C 0010041C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80103620 00100420*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80103624 00100424*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80103628 00100428*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010362C 0010042C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80103630 00100430*/ PPC::Runtime::ASM::blr();
}