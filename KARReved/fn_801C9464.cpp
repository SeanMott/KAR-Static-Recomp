//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80054414.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062CA4.hpp"



void fn_801C9464(PPC::Runtime::GCContext* context)
{
/*801C9464 001C6264*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801C9468 001C6268*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C946C 001C626C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801C9470 001C6270*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801C9474 001C6274*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801C9478 001C6278*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801C947C 001C627C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801C9480 001C6280*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C9484 001C6284*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*801C9488 001C6288*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r3));
/*801C948C 001C628C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801C9490 001C6290*/ PPC::Runtime::ASM::lwzx(context->r30, context->r3, context->r0);
/*801C9494 001C6294*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C9498 001C6298*/ PPC::Runtime::ASM::bne(.L_801C94AC);
/*801C949C 001C629C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C94A0 001C62A0*/ PPC::Runtime::ASM::li(context->r4, 0x2ec);
/*801C94A4 001C62A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C94A8 001C62A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C94AC, 0x801C94AC) //this is a jump label
/*801C94AC 001C62AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*801C94B0 001C62B0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*801C94B4 001C62B4*/ PPC::Runtime::ASM::beq(.L_801C9674);
/*801C94B8 001C62B8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C94BC 001C62BC*/ PPC::Runtime::ASM::bne(.L_801C94D0);
/*801C94C0 001C62C0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C94C4 001C62C4*/ PPC::Runtime::ASM::li(context->r4, 0x2a4);
/*801C94C8 001C62C8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C94CC 001C62CC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C94D0, 0x801C94D0) //this is a jump label
/*801C94D0 001C62D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C94D4 001C62D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*801C94D8 001C62D8*/ PPC::Runtime::ASM::beq(.L_801C94F0);
/*801C94DC 001C62DC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B0A08 @ Get_MemoryOffset_HighBit);
/*801C94E0 001C62E0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C94E4 001C62E4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B0A08 @ Get_MemoryOffset_LowBit);
/*801C94E8 001C62E8*/ PPC::Runtime::ASM::li(context->r4, 0x2a5);
/*801C94EC 001C62EC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C94F0, 0x801C94F0) //this is a jump label
/*801C94F0 001C62F0*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*801C94F4 001C62F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C94F8 001C62F8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801C94FC 001C62FC*/ PPC::Runtime::ASM::bne(.L_801C9548);
/*801C9500 001C6300*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C9504 001C6304*/ PPC::Runtime::ASM::beq(.L_801C9548);
/*801C9508 001C6308*/ PPC::Runtime::ASM::bne(.L_801C951C);
/*801C950C 001C630C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C9510 001C6310*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801C9514 001C6314*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C9518 001C6318*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C951C, 0x801C951C) //this is a jump label
/*801C951C 001C631C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C9520 001C6320*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C9524 001C6324*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801C9528 001C6328*/ PPC::Runtime::ASM::bne(.L_801C9538);
/*801C952C 001C632C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801C9530 001C6330*/ PPC::Runtime::ASM::beq(.L_801C9538);
/*801C9534 001C6334*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801C9538, 0x801C9538) //this is a jump label
/*801C9538 001C6338*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C953C 001C633C*/ PPC::Runtime::ASM::bne(.L_801C9548);
/*801C9540 001C6340*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801C9544 001C6344*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801C9548, 0x801C9548) //this is a jump label
/*801C9548 001C6348*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801C954C 001C634C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/* 801C9550 001C6350  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801C9554 001C6354*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801C9558 001C6358*/ PPC::Runtime::ASM::beq(.L_801C95A8);
/*801C955C 001C635C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/* 801C9560 001C6360  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801C9564 001C6364*/ PPC::Runtime::ASM::bne(.L_801C9598);
/*801C9568 001C6368*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r31));
/*801C956C 001C636C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x418);
/*801C9570 001C6370*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r31));
/*801C9574 001C6374*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x424);
/*801C9578 001C6378*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801C957C 001C637C*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x3e8);
/*801C9580 001C6380*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*801C9584 001C6384*/ PPC::Runtime::ASM::bl(fn_80054414);
/*801C9588 001C6388*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801C958C 001C638C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C9590 001C6390*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801C9594 001C6394*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801C9598, 0x801C9598) //this is a jump label
/*801C9598 001C6398*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801C959C 001C639C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C95A0 001C63A0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801C95A4 001C63A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801C95A8, 0x801C95A8) //this is a jump label
/*801C95A8 001C63A8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C95AC 001C63AC*/ PPC::Runtime::ASM::bne(.L_801C95C0);
/*801C95B0 001C63B0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C95B4 001C63B4*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*801C95B8 001C63B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C95BC 001C63BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C95C0, 0x801C95C0) //this is a jump label
/*801C95C0 001C63C0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C95C4 001C63C4*/ PPC::Runtime::ASM::beq(.L_801C9608);
/*801C95C8 001C63C8*/ PPC::Runtime::ASM::bne(.L_801C95DC);
/*801C95CC 001C63CC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C95D0 001C63D0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801C95D4 001C63D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C95D8 001C63D8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C95DC, 0x801C95DC) //this is a jump label
/*801C95DC 001C63DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C95E0 001C63E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C95E4 001C63E4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801C95E8 001C63E8*/ PPC::Runtime::ASM::bne(.L_801C95F8);
/*801C95EC 001C63EC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801C95F0 001C63F0*/ PPC::Runtime::ASM::beq(.L_801C95F8);
/*801C95F4 001C63F4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801C95F8, 0x801C95F8) //this is a jump label
/*801C95F8 001C63F8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C95FC 001C63FC*/ PPC::Runtime::ASM::beq(.L_801C9608);
/*801C9600 001C6400*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801C9604 001C6404*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_801C9608, 0x801C9608) //this is a jump label
/*801C9608 001C6408*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*801C960C 001C640C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801C9610 001C6410*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x43c);
/*801C9614 001C6414*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801C9618 001C6418*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*801C961C 001C641C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C9620 001C6420*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*801C9624 001C6424*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801C9628 001C6428*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801C962C 001C642C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*801C9630 001C6430*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801C9634 001C6434*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x448);
/*801C9638 001C6438*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C963C 001C643C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*801C9640 001C6440*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801C9644 001C6444*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*801C9648 001C6448*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801C964C 001C644C*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801C9650 001C6450*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*801C9654 001C6454*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801C9658 001C6458*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x454);
/*801C965C 001C645C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801C9660 001C6460*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*801C9664 001C6464*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801C9668 001C6468*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*801C966C 001C646C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801C9670 001C6470*/ PPC::Runtime::ASM::bl(fn_80062CA4);
RUNTIME_PPC_JUMP_LABEL(.L_801C9674, 0x801C9674) //this is a jump label
/*801C9674 001C6474*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801C9678 001C6478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801C967C 001C647C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801C9680 001C6480*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801C9684 001C6484*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801C9688 001C6488*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C968C 001C648C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801C9690 001C6490*/ PPC::Runtime::ASM::blr();
}