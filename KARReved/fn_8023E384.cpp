//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8023E384(PPC::Runtime::GCContext* context)
{
/*8023E384 0023B184*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8023E388 0023B188*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023E38C 0023B18C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8023E390 0023B190*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8023E394 0023B194*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8023E398 0023B198*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8023E39C 0023B19C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8023E3A0 0023B1A0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023E3A4 0023B1A4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8023E3A8 0023B1A8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8023E3AC 0023B1AC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8023E3B0 0023B1B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8023E3B4 0023B1B4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjGetFlags);
/*8023E3B8 0023B1B8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 27, 27);
/*8023E3BC 0023B1BC*/ PPC::Runtime::ASM::bne(.L_8023E548);
/*8023E3C0 0023B1C0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8023E3C4 0023B1C4*/ PPC::Runtime::ASM::bne(.L_8023E53C);
/*8023E3C8 0023B1C8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8023E3CC 0023B1CC*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/*8023E3D0 0023B1D0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8023E3D4 0023B1D4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyeVector?);
/*8023E3D8 0023B1D8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r28));
/*8023E3DC 0023B1DC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8023E3E0 0023B1E0*/ PPC::Runtime::ASM::beq(.L_8023E424);
/*8023E3E4 0023B1E4*/ PPC::Runtime::ASM::bne(.L_8023E3F8);
/*8023E3E8 0023B1E8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72D8 @ Get_MemoryOffset_SDA21);
/*8023E3EC 0023B1EC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8023E3F0 0023B1F0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72E0 @ Get_MemoryOffset_SDA21);
/*8023E3F4 0023B1F4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023E3F8, 0x8023E3F8) //this is a jump label
/*8023E3F8 0023B1F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8023E3FC 0023B1FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023E400 0023B200*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8023E404 0023B204*/ PPC::Runtime::ASM::bne(.L_8023E414);
/*8023E408 0023B208*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8023E40C 0023B20C*/ PPC::Runtime::ASM::beq(.L_8023E414);
/*8023E410 0023B210*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8023E414, 0x8023E414) //this is a jump label
/*8023E414 0023B214*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8023E418 0023B218*/ PPC::Runtime::ASM::beq(.L_8023E424);
/*8023E41C 0023B21C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023E420 0023B220*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_8023E424, 0x8023E424) //this is a jump label
/*8023E424 0023B224*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*8023E428 0023B228*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8023E42C 0023B22C*/ PPC::Runtime::ASM::beq(.L_8023E470);
/*8023E430 0023B230*/ PPC::Runtime::ASM::bne(.L_8023E444);
/*8023E434 0023B234*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72D8 @ Get_MemoryOffset_SDA21);
/*8023E438 0023B238*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8023E43C 0023B23C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72E0 @ Get_MemoryOffset_SDA21);
/*8023E440 0023B240*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023E444, 0x8023E444) //this is a jump label
/*8023E444 0023B244*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8023E448 0023B248*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023E44C 0023B24C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8023E450 0023B250*/ PPC::Runtime::ASM::bne(.L_8023E460);
/*8023E454 0023B254*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8023E458 0023B258*/ PPC::Runtime::ASM::beq(.L_8023E460);
/*8023E45C 0023B25C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8023E460, 0x8023E460) //this is a jump label
/*8023E460 0023B260*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8023E464 0023B264*/ PPC::Runtime::ASM::beq(.L_8023E470);
/*8023E468 0023B268*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023E46C 0023B26C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_8023E470, 0x8023E470) //this is a jump label
/*8023E470 0023B270*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r28));
/*8023E474 0023B274*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023E478 0023B278*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8023E47C 0023B27C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023E480 0023B280*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8023E484 0023B284*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*8023E488 0023B288*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8023E48C 0023B28C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*8023E490 0023B290*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*8023E494 0023B294*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E498 0023B298*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*8023E49C 0023B29C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8023E4A0 0023B2A0*/ PPC::Runtime::ASM::bge(.L_8023E4A8);
/*8023E4A4 0023B2A4*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8023E4A8, 0x8023E4A8) //this is a jump label
/*8023E4A8 0023B2A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2ADC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E4AC 0023B2AC*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8023E4B0 0023B2B0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8023E4B4 0023B2B4*/ PPC::Runtime::ASM::ble(.L_8023E4BC);
/*8023E4B8 0023B2B8*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8023E4BC, 0x8023E4BC) //this is a jump label
/*8023E4BC 0023B2BC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*8023E4C0 0023B2C0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2AE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E4C4 0023B2C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2AE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E4C8 0023B2C8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8023E4CC 0023B2CC*/ PPC::Runtime::ASM::fmadds(context->f31, context->f1, context->f2, context->f0);
/*8023E4D0 0023B2D0*/ PPC::Runtime::ASM::bne(.L_8023E4E4);
/*8023E4D4 0023B2D4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72D8 @ Get_MemoryOffset_SDA21);
/*8023E4D8 0023B2D8*/ PPC::Runtime::ASM::li(context->r4, 0x333);
/*8023E4DC 0023B2DC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72E0 @ Get_MemoryOffset_SDA21);
/*8023E4E0 0023B2E0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023E4E4, 0x8023E4E4) //this is a jump label
/*8023E4E4 0023B2E4*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8023E4E8 0023B2E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8023E4EC 0023B2EC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8023E4F0 0023B2F0*/ PPC::Runtime::ASM::bne(.L_8023E53C);
/*8023E4F4 0023B2F4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8023E4F8 0023B2F8*/ PPC::Runtime::ASM::beq(.L_8023E53C);
/*8023E4FC 0023B2FC*/ PPC::Runtime::ASM::bne(.L_8023E510);
/*8023E500 0023B300*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72D8 @ Get_MemoryOffset_SDA21);
/*8023E504 0023B304*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8023E508 0023B308*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72E0 @ Get_MemoryOffset_SDA21);
/*8023E50C 0023B30C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023E510, 0x8023E510) //this is a jump label
/*8023E510 0023B310*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8023E514 0023B314*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023E518 0023B318*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8023E51C 0023B31C*/ PPC::Runtime::ASM::bne(.L_8023E52C);
/*8023E520 0023B320*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8023E524 0023B324*/ PPC::Runtime::ASM::beq(.L_8023E52C);
/*8023E528 0023B328*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8023E52C, 0x8023E52C) //this is a jump label
/*8023E52C 0023B32C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8023E530 0023B330*/ PPC::Runtime::ASM::bne(.L_8023E53C);
/*8023E534 0023B334*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023E538 0023B338*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8023E53C, 0x8023E53C) //this is a jump label
/*8023E53C 0023B33C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8023E540 0023B340*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8023E544 0023B344*/ PPC::Runtime::ASM::bl(fn_GXLink_Common);
RUNTIME_PPC_JUMP_LABEL(.L_8023E548, 0x8023E548) //this is a jump label
/*8023E548 0023B348*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8023E54C 0023B34C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8023E550 0023B350*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8023E554 0023B354*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8023E558 0023B358*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8023E55C 0023B35C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023E560 0023B360*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8023E564 0023B364*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023E568 0023B368*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8023E56C 0023B36C*/ PPC::Runtime::ASM::blr();
}