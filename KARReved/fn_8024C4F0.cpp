//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8024C4F0(PPC::Runtime::GCContext* context)
{
/*8024C4F0 002492F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8024C4F4 002492F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024C4F8 002492F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024C4FC 002492FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024C500 00249300*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024C504 00249304*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8024C508 00249308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r3));
/*8024C50C 0024930C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024C510 00249310*/ PPC::Runtime::ASM::beq(.L_8024C52C);
/*8024C514 00249314*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B5CA8 @ Get_MemoryOffset_HighBit);
/*8024C518 00249318*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B5CB4 @ Get_MemoryOffset_HighBit);
/*8024C51C 0024931C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B5CA8 @ Get_MemoryOffset_LowBit);
/*8024C520 00249320*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*8024C524 00249324*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B5CB4 @ Get_MemoryOffset_LowBit);
/*8024C528 00249328*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024C52C, 0x8024C52C) //this is a jump label
/*8024C52C 0024932C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r30));
/*8024C530 00249330*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*8024C534 00249334*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024C538 00249338*/ PPC::Runtime::ASM::beq(.L_8024C554);
/*8024C53C 0024933C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B5CA8 @ Get_MemoryOffset_HighBit);
/*8024C540 00249340*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B5CB4 @ Get_MemoryOffset_HighBit);
/*8024C544 00249344*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B5CA8 @ Get_MemoryOffset_LowBit);
/*8024C548 00249348*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*8024C54C 0024934C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B5CB4 @ Get_MemoryOffset_LowBit);
/*8024C550 00249350*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024C554, 0x8024C554) //this is a jump label
/*8024C554 00249354*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*8024C558 00249358*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024C55C 0024935C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*8024C560 00249360*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8024C564 00249364*/ PPC::Runtime::ASM::beq(.L_8024C578);
/*8024C568 00249368*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34c, context->r30));
/* 8024C56C 0024936C  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*8024C570 00249370*/ PPC::Runtime::ASM::beq(.L_8024C578);
/*8024C574 00249374*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024C578, 0x8024C578) //this is a jump label
/*8024C578 00249378*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8024C57C 0024937C*/ PPC::Runtime::ASM::beq(.L_8024C59C);
/*8024C580 00249380*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8024C584 00249384*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8024C588 00249388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8024C58C 0024938C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8024C590 00249390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8024C594 00249394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8024C598 00249398*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8024C59C, 0x8024C59C) //this is a jump label
/*8024C59C 0024939C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024C5A0 002493A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024C5A4 002493A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024C5A8 002493A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024C5AC 002493AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8024C5B0 002493B0*/ PPC::Runtime::ASM::blr();
}