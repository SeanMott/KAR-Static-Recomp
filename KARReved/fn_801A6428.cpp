//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801A6428(PPC::Runtime::GCContext* context)
{
/*801A6428 001A3228*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A642C 001A322C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A6430 001A3230*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A6434 001A3234*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801A6438 001A3238*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*801A643C 001A323C*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_2 @ Get_MemoryOffset_HighBit);
/*801A6440 001A3240*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*801A6444 001A3244*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*801A6448 001A3248*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801A644C 001A324C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, StructWithFuncPtrs_2 @ Get_MemoryOffset_LowBit);
/*801A6450 001A3250*/ PPC::Runtime::ASM::b(.L_801A65C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A6454, 0x801A6454) //this is a jump label
/*801A6454 001A3254*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*801A6458 001A3258*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*801A645C 001A325C*/ PPC::Runtime::ASM::mr(context->r30, context->r29);
/*801A6460 001A3260*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_801A6464, 0x801A6464) //this is a jump label
/*801A6464 001A3264*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*801A6468 001A3268*/ PPC::Runtime::ASM::beq(.L_801A64B8);
/*801A646C 001A326C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*801A6470 001A3270*/ PPC::Runtime::ASM::stwx(context->r28, context->r3, context->r30);
/*801A6474 001A3274*/ PPC::Runtime::ASM::beq(.L_801A6480);
/*801A6478 001A3278*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*801A647C 001A327C*/ PPC::Runtime::ASM::b(.L_801A6484);
RUNTIME_PPC_JUMP_LABEL(.L_801A6480, 0x801A6480) //this is a jump label
/*801A6480 001A3280*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801A6484, 0x801A6484) //this is a jump label
/*801A6484 001A3284*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801A6488 001A3288*/ PPC::Runtime::ASM::beq(.L_801A6494);
/*801A648C 001A328C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A6490 001A3290*/ PPC::Runtime::ASM::bl(fn_80420D5C);
RUNTIME_PPC_JUMP_LABEL(.L_801A6494, 0x801A6494) //this is a jump label
/*801A6494 001A3294*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*801A6498 001A3298*/ PPC::Runtime::ASM::beq(.L_801A64A4);
/*801A649C 001A329C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*801A64A0 001A32A0*/ PPC::Runtime::ASM::b(.L_801A64A8);
RUNTIME_PPC_JUMP_LABEL(.L_801A64A4, 0x801A64A4) //this is a jump label
/*801A64A4 001A32A4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801A64A8, 0x801A64A8) //this is a jump label
/*801A64A8 001A32A8*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*801A64AC 001A32AC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*801A64B0 001A32B0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*801A64B4 001A32B4*/ PPC::Runtime::ASM::b(.L_801A6464);
RUNTIME_PPC_JUMP_LABEL(.L_801A64B8, 0x801A64B8) //this is a jump label
/*801A64B8 001A32B8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*801A64BC 001A32BC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjGetFlags);
/*801A64C0 001A32C0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 19, 19);
/*801A64C4 001A32C4*/ PPC::Runtime::ASM::bne(.L_801A64FC);
/*801A64C8 001A32C8*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A64CC 001A32CC*/ PPC::Runtime::ASM::bne(.L_801A64D8);
/*801A64D0 001A32D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A64D4 001A32D4*/ PPC::Runtime::ASM::b(.L_801A64DC);
RUNTIME_PPC_JUMP_LABEL(.L_801A64D8, 0x801A64D8) //this is a jump label
/*801A64D8 001A32D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_801A64DC, 0x801A64DC) //this is a jump label
/*801A64DC 001A32DC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A64E0 001A32E0*/ PPC::Runtime::ASM::beq(.L_801A64FC);
/*801A64E4 001A32E4*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A64E8 001A32E8*/ PPC::Runtime::ASM::bne(.L_801A64F4);
/*801A64EC 001A32EC*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*801A64F0 001A32F0*/ PPC::Runtime::ASM::b(.L_801A65C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A64F4, 0x801A64F4) //this is a jump label
/*801A64F4 001A32F4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*801A64F8 001A32F8*/ PPC::Runtime::ASM::b(.L_801A65C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A64FC, 0x801A64FC) //this is a jump label
/*801A64FC 001A32FC*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A6500 001A3300*/ PPC::Runtime::ASM::bne(.L_801A650C);
/*801A6504 001A3304*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A6508 001A3308*/ PPC::Runtime::ASM::b(.L_801A6510);
RUNTIME_PPC_JUMP_LABEL(.L_801A650C, 0x801A650C) //this is a jump label
/*801A650C 001A330C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_801A6510, 0x801A6510) //this is a jump label
/*801A6510 001A3310*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A6514 001A3314*/ PPC::Runtime::ASM::beq(.L_801A6530);
/*801A6518 001A3318*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A651C 001A331C*/ PPC::Runtime::ASM::bne(.L_801A6528);
/*801A6520 001A3320*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*801A6524 001A3324*/ PPC::Runtime::ASM::b(.L_801A65C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A6528, 0x801A6528) //this is a jump label
/*801A6528 001A3328*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*801A652C 001A332C*/ PPC::Runtime::ASM::b(.L_801A65C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A6530, 0x801A6530) //this is a jump label
/*801A6530 001A3330*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A6534 001A3334*/ PPC::Runtime::ASM::bne(.L_801A6540);
/*801A6538 001A3338*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A653C 001A333C*/ PPC::Runtime::ASM::b(.L_801A6544);
RUNTIME_PPC_JUMP_LABEL(.L_801A6540, 0x801A6540) //this is a jump label
/*801A6540 001A3340*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_801A6544, 0x801A6544) //this is a jump label
/*801A6544 001A3344*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A6548 001A3348*/ PPC::Runtime::ASM::bne(.L_801A6554);
/*801A654C 001A334C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*801A6550 001A3350*/ PPC::Runtime::ASM::b(.L_801A65C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A6554, 0x801A6554) //this is a jump label
/*801A6554 001A3354*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A6558 001A3358*/ PPC::Runtime::ASM::bne(.L_801A6564);
/*801A655C 001A335C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801A6560 001A3360*/ PPC::Runtime::ASM::b(.L_801A6568);
RUNTIME_PPC_JUMP_LABEL(.L_801A6564, 0x801A6564) //this is a jump label
/*801A6564 001A3364*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_801A6568, 0x801A6568) //this is a jump label
/*801A6568 001A3368*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801A656C 001A336C*/ PPC::Runtime::ASM::bne(.L_801A6578);
/*801A6570 001A3370*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A6574 001A3374*/ PPC::Runtime::ASM::b(.L_801A657C);
RUNTIME_PPC_JUMP_LABEL(.L_801A6578, 0x801A6578) //this is a jump label
/*801A6578 001A3378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801A657C, 0x801A657C) //this is a jump label
/*801A657C 001A337C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A6580 001A3380*/ PPC::Runtime::ASM::beq(.L_801A65B0);
/*801A6584 001A3384*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A6588 001A3388*/ PPC::Runtime::ASM::bne(.L_801A6594);
/*801A658C 001A338C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801A6590 001A3390*/ PPC::Runtime::ASM::b(.L_801A6598);
RUNTIME_PPC_JUMP_LABEL(.L_801A6594, 0x801A6594) //this is a jump label
/*801A6594 001A3394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_801A6598, 0x801A6598) //this is a jump label
/*801A6598 001A3398*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801A659C 001A339C*/ PPC::Runtime::ASM::bne(.L_801A65A8);
/*801A65A0 001A33A0*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*801A65A4 001A33A4*/ PPC::Runtime::ASM::b(.L_801A65C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A65A8, 0x801A65A8) //this is a jump label
/*801A65A8 001A33A8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801A65AC 001A33AC*/ PPC::Runtime::ASM::b(.L_801A65C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A65B0, 0x801A65B0) //this is a jump label
/*801A65B0 001A33B0*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A65B4 001A33B4*/ PPC::Runtime::ASM::bne(.L_801A65C0);
/*801A65B8 001A33B8*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*801A65BC 001A33BC*/ PPC::Runtime::ASM::b(.L_801A6530);
RUNTIME_PPC_JUMP_LABEL(.L_801A65C0, 0x801A65C0) //this is a jump label
/*801A65C0 001A33C0*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*801A65C4 001A33C4*/ PPC::Runtime::ASM::b(.L_801A6530);
RUNTIME_PPC_JUMP_LABEL(.L_801A65C8, 0x801A65C8) //this is a jump label
/*801A65C8 001A33C8*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*801A65CC 001A33CC*/ PPC::Runtime::ASM::bne(.L_801A6454);
/*801A65D0 001A33D0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801A65D4 001A33D4*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*801A65D8 001A33D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A65DC 001A33DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A65E0 001A33E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A65E4 001A33E4*/ PPC::Runtime::ASM::blr();
}