//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803F1884(PPC::Runtime::GCContext* context)
{
/*803F1884 003EE684*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE150 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803F1888 003EE688*/ PPC::Runtime::ASM::lis(context->r4, lbl_80501150 @ Get_MemoryOffset_HighBit);
/*803F188C 003EE68C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803F1890 003EE690*/ PPC::Runtime::ASM::addi(context->r9, context->r4, lbl_80501150 @ Get_MemoryOffset_LowBit);
/*803F1894 003EE694*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x3);
/*803F1898 003EE698*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803F189C 003EE69C*/ PPC::Runtime::ASM::subfic(context->r7, context->r5, 0x7f);
/*803F18A0 003EE6A0*/ PPC::Runtime::ASM::subfic(context->r10, context->r6, 0x7f);
/*803F18A4 003EE6A4*/ PPC::Runtime::ASM::bne(.L_803F18FC);
/*803F18A8 003EE6A8*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 1);
/*803F18AC 003EE6AC*/ PPC::Runtime::ASM::add(context->r8, context->r9, context->r0);
/*803F18B0 003EE6B0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98c, context->r8));
/*803F18B4 003EE6B4*/ PPC::Runtime::ASM::slwi(context->r5, context->r7, 1);
/*803F18B8 003EE6B8*/ PPC::Runtime::ASM::slwi(context->r4, context->r10, 1);
/*803F18BC 003EE6BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*803F18C0 003EE6C0*/ PPC::Runtime::ASM::add(context->r7, context->r9, context->r5);
/*803F18C4 003EE6C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 1);
/*803F18C8 003EE6C8*/ PPC::Runtime::ASM::lha(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98c, context->r7));
/*803F18CC 003EE6CC*/ PPC::Runtime::ASM::add(context->r5, context->r9, context->r4);
/*803F18D0 003EE6D0*/ PPC::Runtime::ASM::add(context->r4, context->r9, context->r0);
/*803F18D4 003EE6D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*803F18D8 003EE6D8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98c, context->r5));
/*803F18DC 003EE6DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*803F18E0 003EE6E0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98c, context->r4));
/*803F18E4 003EE6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*803F18E8 003EE6E8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8c, context->r7));
/*803F18EC 003EE6EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*803F18F0 003EE6F0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8c, context->r8));
/*803F18F4 003EE6F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*803F18F8 003EE6F8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803F18FC, 0x803F18FC) //this is a jump label
/*803F18FC 003EE6FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*803F1900 003EE700*/ PPC::Runtime::ASM::add(context->r4, context->r9, context->r0);
/*803F1904 003EE704*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78c, context->r4));
/*803F1908 003EE708*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*803F190C 003EE70C*/ PPC::Runtime::ASM::slwi(context->r4, context->r10, 2);
/*803F1910 003EE710*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*803F1914 003EE714*/ PPC::Runtime::ASM::add(context->r5, context->r9, context->r0);
/*803F1918 003EE718*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*803F191C 003EE71C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78c, context->r5));
/*803F1920 003EE720*/ PPC::Runtime::ASM::add(context->r5, context->r9, context->r4);
/*803F1924 003EE724*/ PPC::Runtime::ASM::add(context->r4, context->r9, context->r0);
/*803F1928 003EE728*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*803F192C 003EE72C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78c, context->r5));
/*803F1930 003EE730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*803F1934 003EE734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78c, context->r4));
/*803F1938 003EE738*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*803F193C 003EE73C*/ PPC::Runtime::ASM::blr();
}