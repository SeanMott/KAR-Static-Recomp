//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"



void fn_802E6394(PPC::Runtime::GCContext* context)
{
/*802E6394 002E3194*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*802E6398 002E3198*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E639C 002E319C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802E63A0 002E31A0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E63A4 002E31A4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E63A8 002E31A8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E63AC 002E31AC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802E63B0 002E31B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802E63B4 002E31B4*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802E63B8 002E31B8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802E63BC 002E31BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802E63C0 002E31C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802E63C4 002E31C4*/ PPC::Runtime::ASM::beq(.L_802E650C);
/*802E63C8 002E31C8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E63CC 002E31CC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*802E63D0 002E31D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E63D4 002E31D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D94E8 @ Get_MemoryOffset_SDA21);
/*802E63D8 002E31D8*/ PPC::Runtime::ASM::li(context->r6, lbl_805D94E0 @ Get_MemoryOffset_SDA21);
/*802E63DC 002E31DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802E63E0 002E31E0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802E63E4 002E31E4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F51DC @ Get_MemoryOffset_HighBit);
/*802E63E8 002E31E8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*802E63EC 002E31EC*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E3948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E63F0 002E31F0*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*802E63F4 002E31F4*/ PPC::Runtime::ASM::addi(context->r28, context->r5, lbl_804F51DC @ Get_MemoryOffset_LowBit);
/*802E63F8 002E31F8*/ PPC::Runtime::ASM::addi(context->r29, context->r4, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*802E63FC 002E31FC*/ PPC::Runtime::ASM::b(.L_802E6504);
RUNTIME_PPC_JUMP_LABEL(.L_802E6400, 0x802E6400) //this is a jump label
/*802E6400 002E3200*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*802E6404 002E3204*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802E6408 002E3208*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802E640C 002E320C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r12));
/*802E6410 002E3210*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E6414 002E3214*/ PPC::Runtime::ASM::bctrl();
/*802E6418 002E3218*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E641C 002E321C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E6420 002E3220*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802E6424 002E3224*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E6428 002E3228*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802E642C 002E322C*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*802E6430 002E3230*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E6434 002E3234*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E6438 002E3238*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*802E643C 002E323C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802E6440 002E3240*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802E6444 002E3244*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E6448 002E3248*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f1);
/*802E644C 002E324C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*802E6450 002E3250*/ PPC::Runtime::ASM::fdivs(context->f30, context->f0, context->f1);
/*802E6454 002E3254*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E6458 002E3258*/ PPC::Runtime::ASM::bctrl();
/*802E645C 002E325C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E6460 002E3260*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802E6464 002E3264*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E6468 002E3268*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E646C 002E326C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E6470 002E3270*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E6474 002E3274*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E6478 002E3278*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802E647C 002E327C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E6480 002E3280*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E6484 002E3284*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E6488 002E3288*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E648C 002E328C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*802E6490 002E3290*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E6494 002E3294*/ PPC::Runtime::ASM::bctrl();
/* 802E6498 002E3298  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E649C 002E329C*/ PPC::Runtime::ASM::beq(.L_802E64D8);
/*802E64A0 002E32A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E64A4 002E32A4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*802E64A8 002E32A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E64AC 002E32AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*802E64B0 002E32B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E64B4 002E32B4*/ PPC::Runtime::ASM::bctrl();
/* 802E64B8 002E32B8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E64BC 002E32BC*/ PPC::Runtime::ASM::beq(.L_802E64D8);
/*802E64C0 002E32C0*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x10);
/*802E64C4 002E32C4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*802E64C8 002E32C8*/ PPC::Runtime::ASM::stwx(context->r27, context->r31, context->r0);
/*802E64CC 002E32CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*802E64D0 002E32D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E64D4 002E32D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802E64D8, 0x802E64D8) //this is a jump label
/*802E64D8 002E32D8*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0xc);
/*802E64DC 002E32DC*/ PPC::Runtime::ASM::beq(.L_802E64EC);
/*802E64E0 002E32E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*802E64E4 002E32E4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*802E64E8 002E32E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802E64EC, 0x802E64EC) //this is a jump label
/*802E64EC 002E32EC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802E64F0 002E32F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802E64F4 002E32F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*802E64F8 002E32F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E64FC 002E32FC*/ PPC::Runtime::ASM::bctrl();
/*802E6500 002E3300*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802E6504, 0x802E6504) //this is a jump label
/*802E6504 002E3304*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*802E6508 002E3308*/ PPC::Runtime::ASM::bne(.L_802E6400);
RUNTIME_PPC_JUMP_LABEL(.L_802E650C, 0x802E650C) //this is a jump label
/*802E650C 002E330C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E6510 002E3310*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E6514 002E3314*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802E6518 002E3318*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802E651C 002E331C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E6520 002E3320*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802E6524 002E3324*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802E6528 002E3328*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E652C 002E332C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*802E6530 002E3330*/ PPC::Runtime::ASM::blr();
}