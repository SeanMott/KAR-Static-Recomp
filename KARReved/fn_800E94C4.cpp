//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E94C4(PPC::Runtime::GCContext* context)
{
/*800E94C4 000E62C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800E94C8 000E62C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E94CC 000E62CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800E94D0 000E62D0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800E94D4 000E62D4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800E94D8 000E62D8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800E94DC 000E62DC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800E94E0 000E62E0*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E94E4 000E62E4*/ PPC::Runtime::ASM::lis(context->r7, MemoryOffset_960 @ Get_MemoryOffset_HighBit);
/*800E94E8 000E62E8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800E94EC 000E62EC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800E94F0 000E62F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*800E94F4 000E62F4*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800E94F8 000E62F8*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800E94FC 000E62FC*/ PPC::Runtime::ASM::addi(context->r31, context->r7, MemoryOffset_960 @ Get_MemoryOffset_LowBit);
/*800E9500 000E6300*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800E9504 000E6304*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800E9508 000E6308*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E950C 000E630C*/ PPC::Runtime::ASM::bne(.L_800E9520);
/*800E9510 000E6310*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E9514 000E6314*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xe0);
/*800E9518 000E6318*/ PPC::Runtime::ASM::li(context->r4, 0x129);
/*800E951C 000E631C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E9520, 0x800E9520) //this is a jump label
/*800E9520 000E6320*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E9524 000E6324*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800E9528 000E6328*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E952C 000E632C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E9530 000E6330*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800E9534 000E6334*/ PPC::Runtime::ASM::bne(.L_800E9548);
/*800E9538 000E6338*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E953C 000E633C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x38);
/*800E9540 000E6340*/ PPC::Runtime::ASM::li(context->r4, 0x113);
/*800E9544 000E6344*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E9548, 0x800E9548) //this is a jump label
/*800E9548 000E6348*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800E954C 000E634C*/ PPC::Runtime::ASM::xor(context->r0, context->r29, context->r0);
/*800E9550 000E6350*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800E9554 000E6354*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r29);
/*800E9558 000E6358*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/* 800E955C 000E635C  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*800E9560 000E6360*/ PPC::Runtime::ASM::beq(.L_800E9590);
/*800E9564 000E6364*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800E9568 000E6368*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800E956C 000E636C*/ PPC::Runtime::ASM::beq(.L_800E9578);
/*800E9570 000E6370*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E9574 000E6374*/ PPC::Runtime::ASM::b(.L_800E957C);
RUNTIME_PPC_JUMP_LABEL(.L_800E9578, 0x800E9578) //this is a jump label
/*800E9578 000E6378*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800E957C, 0x800E957C) //this is a jump label
/*800E957C 000E637C*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r29);
/*800E9580 000E6380*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800E9584 000E6384*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*800E9588 000E6388*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*800E958C 000E638C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_800E9590, 0x800E9590) //this is a jump label
/*800E9590 000E6390*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E9594 000E6394*/ PPC::Runtime::ASM::bne(.L_800E95B8);
/*800E9598 000E6398*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800E959C 000E639C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*800E95A0 000E63A0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800E95A4 000E63A4*/ PPC::Runtime::ASM::bl(OSReport);
/*800E95A8 000E63A8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E95AC 000E63AC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x58);
/*800E95B0 000E63B0*/ PPC::Runtime::ASM::li(context->r4, 0x114);
/*800E95B4 000E63B4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E95B8, 0x800E95B8) //this is a jump label
/*800E95B8 000E63B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800E95BC 000E63BC*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*800E95C0 000E63C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*800E95C4 000E63C4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*800E95C8 000E63C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E95CC 000E63CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800E95D0 000E63D0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800E95D4 000E63D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E95D8 000E63D8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E95DC 000E63DC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r0);
/*800E95E0 000E63E0*/ PPC::Runtime::ASM::bne(.L_800E95EC);
/*800E95E4 000E63E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF758 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E95E8 000E63E8*/ PPC::Runtime::ASM::b(.L_800E9608);
RUNTIME_PPC_JUMP_LABEL(.L_800E95EC, 0x800E95EC) //this is a jump label
/*800E95EC 000E63EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800E95F0 000E63F0*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*800E95F4 000E63F4*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*800E95F8 000E63F8*/ PPC::Runtime::ASM::lfsx(context->f0, context->r4, context->r0);
/*800E95FC 000E63FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*800E9600 000E6400*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800E9604 000E6404*/ PPC::Runtime::ASM::fmadds(context->f1, context->f31, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_800E9608, 0x800E9608) //this is a jump label
/*800E9608 000E6408*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800E960C 000E640C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800E9610 000E6410*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800E9614 000E6414*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800E9618 000E6418*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800E961C 000E641C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E9620 000E6420*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800E9624 000E6424*/ PPC::Runtime::ASM::blr();
}