//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8045FDDC.hpp"



void fn_80460490(PPC::Runtime::GCContext* context)
{
/*80460490 0045D290*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80460494 0045D294*/ PPC::Runtime::ASM::mflr(context->r0);
/*80460498 0045D298*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*8046049C 0045D29C*/ PPC::Runtime::ASM::lis(context->r6, STRUCT_BYTE4_COUNT_1805B5438 @ Get_MemoryOffset_HighBit);
/*804604A0 0045D2A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804604A4 0045D2A4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805B543C @ Get_MemoryOffset_HighBit);
/*804604A8 0045D2A8*/ PPC::Runtime::ASM::li(context->r0, 0x100);
/*804604AC 0045D2AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804604B0 0045D2B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*804604B4 0045D2B4*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805B5438 @ Get_MemoryOffset_LowBit ( context->r6 ));
/*804604B8 0045D2B8*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805B543C @ Get_MemoryOffset_LowBit ( context->r3 ));
/*804604BC 0045D2BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*804604C0 0045D2C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*804604C4 0045D2C4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804604C8 0045D2C8*/ PPC::Runtime::ASM::beq(.L_804604E4);
/*804604CC 0045D2CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804604D0 0045D2D0*/ PPC::Runtime::ASM::mr(context->r4, context->r7);
/*804604D4 0045D2D4*/ PPC::Runtime::ASM::bl(fn_8045FDDC);
/*804604D8 0045D2D8*/ PPC::Runtime::ASM::extsh(context->r0, context->r3);
/*804604DC 0045D2DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804604E0 0045D2E0*/ PPC::Runtime::ASM::b(.L_804604EC);
RUNTIME_PPC_JUMP_LABEL(.L_804604E4, 0x804604E4) //this is a jump label
/*804604E4 0045D2E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804604E8 0045D2E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_804604EC, 0x804604EC) //this is a jump label
/*804604EC 0045D2EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804604F0 0045D2F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804604F4 0045D2F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804604F8 0045D2F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804604FC 0045D2FC*/ PPC::Runtime::ASM::blr();
}