//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028F83C(PPC::Runtime::GCContext* context)
{
/*8028F83C 0028C63C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028F840 0028C640*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028F844 0028C644*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028F848 0028C648*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8028F84C 0028C64C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8028F850 0028C650*/ PPC::Runtime::ASM::beq(.L_8028F888);
/*8028F854 0028C654*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE2F8 @ Get_MemoryOffset_HighBit);
/*8028F858 0028C658*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE2F8 @ Get_MemoryOffset_LowBit);
/*8028F85C 0028C65C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8028F860 0028C660*/ PPC::Runtime::ASM::beq(.L_8028F878);
/*8028F864 0028C664*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE304 @ Get_MemoryOffset_HighBit);
/*8028F868 0028C668*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028F86C 0028C66C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BE304 @ Get_MemoryOffset_LowBit);
/*8028F870 0028C670*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8028F874 0028C674*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028F878, 0x8028F878) //this is a jump label
/*8028F878 0028C678*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*8028F87C 0028C67C*/ PPC::Runtime::ASM::ble(.L_8028F888);
/*8028F880 0028C680*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028F884 0028C684*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028F888, 0x8028F888) //this is a jump label
/*8028F888 0028C688*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028F88C 0028C68C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028F890 0028C690*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028F894 0028C694*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028F898 0028C698*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028F89C 0028C69C*/ PPC::Runtime::ASM::blr();
}