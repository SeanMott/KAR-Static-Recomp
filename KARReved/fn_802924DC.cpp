//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802924DC(PPC::Runtime::GCContext* context)
{
/*802924DC 0028F2DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802924E0 0028F2E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802924E4 0028F2E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802924E8 0028F2E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 802924EC 0028F2EC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802924F0 0028F2F0*/ PPC::Runtime::ASM::beq(.L_80292514);
/*802924F4 0028F2F4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BD4C0 @ Get_MemoryOffset_HighBit);
/*802924F8 0028F2F8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*802924FC 0028F2FC*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804BD4C0 @ Get_MemoryOffset_LowBit);
/*80292500 0028F300*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80292504 0028F304*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80292508 0028F308*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029250C 0028F30C*/ PPC::Runtime::ASM::ble(.L_80292514);
/*80292510 0028F310*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80292514, 0x80292514) //this is a jump label
/*80292514 0028F314*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292518 0028F318*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029251C 0028F31C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292520 0028F320*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80292524 0028F324*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80292528 0028F328*/ PPC::Runtime::ASM::blr();
}