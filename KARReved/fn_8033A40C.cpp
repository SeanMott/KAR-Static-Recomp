//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8033A40C(PPC::Runtime::GCContext* context)
{
/*8033A40C 0033720C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8033A410 00337210*/ PPC::Runtime::ASM::mflr(context->r0);
/*8033A414 00337214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8033A418 00337218*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8033A41C 0033721C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8033A420 00337220*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8033A424 00337224*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8033A428 00337228*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8033A42C 0033722C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8033A430 00337230*/ PPC::Runtime::ASM::beq(.L_8033A600);
/*8033A434 00337234*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8033A438 00337238*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8033A43C 0033723C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8033A440 00337240*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*8033A444 00337244*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8033A448 00337248*/ PPC::Runtime::ASM::beq(.L_8033A450);
/*8033A44C 0033724C*/ PPC::Runtime::ASM::b(.L_8033A454);
RUNTIME_PPC_JUMP_LABEL(.L_8033A450, 0x8033A450) //this is a jump label
/*8033A450 00337250*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAC54 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8033A454, 0x8033A454) //this is a jump label
/*8033A454 00337254*/ PPC::Runtime::ASM::lis(context->r3, String_ "GROUND_MAWARUSHIMA_pt" Get_MemoryOffset_HighBit);
/*8033A458 00337258*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "GROUND_MAWARUSHIMA_pt" Get_MemoryOffset_LowBit);
/*8033A45C 0033725C*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8033A460 00337260  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033A464 00337264*/ PPC::Runtime::ASM::beq(.L_8033A600);
/*8033A468 00337268*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8033A46C 0033726C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8033A470 00337270*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r12));
/*8033A474 00337274*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033A478 00337278*/ PPC::Runtime::ASM::bctrl();
/* 8033A47C 0033727C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033A480 00337280*/ PPC::Runtime::ASM::beq(.L_8033A600);
/*8033A484 00337284*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8033A488 00337288*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8033A48C 0033728C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r12));
/*8033A490 00337290*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033A494 00337294*/ PPC::Runtime::ASM::bctrl();
/*8033A498 00337298*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4350 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A49C 0033729C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8033A4A0 003372A0*/ PPC::Runtime::ASM::bge(.L_8033A600);
/*8033A4A4 003372A4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8033A4A8 003372A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8033A4AC 003372AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*8033A4B0 003372B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033A4B4 003372B4*/ PPC::Runtime::ASM::bctrl();
/*8033A4B8 003372B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8033A4BC 003372BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4288 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A4C0 003372C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8033A4C4 003372C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8033A4C8 003372C8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8033A4CC 003372CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8033A4D0 003372D0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8033A4D4 003372D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8033A4D8 003372D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8033A4DC 003372DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8033A4E0 003372E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8033A4E4 003372E4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8033A4E8 003372E8*/ PPC::Runtime::ASM::beq(.L_8033A52C);
/*8033A4EC 003372EC*/ PPC::Runtime::ASM::bne(.L_8033A500);
/*8033A4F0 003372F0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DAC34 @ Get_MemoryOffset_SDA21);
/*8033A4F4 003372F4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8033A4F8 003372F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAC24 @ Get_MemoryOffset_SDA21);
/*8033A4FC 003372FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033A500, 0x8033A500) //this is a jump label
/*8033A500 00337300*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8033A504 00337304*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8033A508 00337308*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8033A50C 0033730C*/ PPC::Runtime::ASM::bne(.L_8033A51C);
/*8033A510 00337310*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8033A514 00337314*/ PPC::Runtime::ASM::beq(.L_8033A51C);
/*8033A518 00337318*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8033A51C, 0x8033A51C) //this is a jump label
/* 8033A51C 0033731C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033A520 00337320*/ PPC::Runtime::ASM::beq(.L_8033A52C);
/*8033A524 00337324*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8033A528 00337328*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_8033A52C, 0x8033A52C) //this is a jump label
/*8033A52C 0033732C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8033A530 00337330*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8033A534 00337334*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4288 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A538 00337338*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8033A53C 0033733C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r6));
/*8033A540 00337340*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8033A544 00337344*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r6));
/*8033A548 00337348*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*8033A54C 0033734C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A550 00337350*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8033A554 00337354*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033A558 00337358*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033A55C 0033735C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033A560 00337360*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8033A564 00337364*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033A568 00337368*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*8033A56C 0033736C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8033A570 00337370*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8033A574 00337374*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8033A578 00337378*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8033A57C 0033737C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8033A580 00337380*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8033A584 00337384*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8033A588 00337388*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8033A58C 0033738C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8033A590 00337390*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*8033A594 00337394*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8033A598 00337398*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8033A59C 0033739C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8033A5A0 003373A0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8033A5A4 003373A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8033A5A8 003373A8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8033A5AC 003373AC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8033A5B0 003373B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8033A5B4 003373B4*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*8033A5B8 003373B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8033A5BC 003373BC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8033A5C0 003373C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8033A5C4 003373C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8033A5C8 003373C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8033A5CC 003373CC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8033A5D0 003373D0*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*8033A5D4 003373D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8033A5D8 003373D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*8033A5DC 003373DC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8033A5E0 003373E0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*8033A5E4 003373E4*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*8033A5E8 003373E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8033A5EC 003373EC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8033A5F0 003373F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8033A5F4 003373F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r12));
/*8033A5F8 003373F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033A5FC 003373FC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8033A600, 0x8033A600) //this is a jump label
/*8033A600 00337400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8033A604 00337404*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8033A608 00337408*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8033A60C 0033740C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8033A610 00337410*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8033A614 00337414*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*8033A618 00337418*/ PPC::Runtime::ASM::blr();
}