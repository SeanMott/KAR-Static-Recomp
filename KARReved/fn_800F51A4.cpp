//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800F51A4(PPC::Runtime::GCContext* context)
{
/*800F51A4 000F1FA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800F51A8 000F1FA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F51AC 000F1FAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F51B0 000F1FB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F51B4 000F1FB4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800F51B8 000F1FB8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F51BC 000F1FBC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800F51C0 000F1FC0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 800F51C4 000F1FC4  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*800F51C8 000F1FC8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800F51CC 000F1FCC*/ PPC::Runtime::ASM::bne(.L_800F51E4);
/*800F51D0 000F1FD0*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_979 @ Get_MemoryOffset_HighBit);
/*800F51D4 000F1FD4*/ PPC::Runtime::ASM::li(context->r4, 0x221);
/*800F51D8 000F1FD8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_979 @ Get_MemoryOffset_LowBit);
/*800F51DC 000F1FDC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D61B0 @ Get_MemoryOffset_SDA21);
/*800F51E0 000F1FE0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F51E4, 0x800F51E4) //this is a jump label
/*800F51E4 000F1FE4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*800F51E8 000F1FE8*/ PPC::Runtime::ASM::lis(context->r3, StructWithStructs_80 @ Get_MemoryOffset_HighBit);
/*800F51EC 000F1FEC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructWithStructs_80 @ Get_MemoryOffset_LowBit);
/*800F51F0 000F1FF0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800F51F4 000F1FF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800F51F8 000F1FF8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800F51FC 000F1FFC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800F5200 000F2000*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800F5204 000F2004*/ PPC::Runtime::ASM::beq(.L_800F5218);
/*800F5208 000F2008*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800F520C 000F200C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F5210 000F2010*/ PPC::Runtime::ASM::beq(.L_800F5218);
/*800F5214 000F2014*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800F5218, 0x800F5218) //this is a jump label
/*800F5218 000F2018*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800F521C 000F201C*/ PPC::Runtime::ASM::bne(.L_800F5238);
/*800F5220 000F2020*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_979 @ Get_MemoryOffset_HighBit);
/*800F5224 000F2024*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_983 @ Get_MemoryOffset_HighBit);
/*800F5228 000F2028*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_979 @ Get_MemoryOffset_LowBit);
/*800F522C 000F202C*/ PPC::Runtime::ASM::li(context->r4, 0x226);
/*800F5230 000F2030*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_983 @ Get_MemoryOffset_LowBit);
/*800F5234 000F2034*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800F5238, 0x800F5238) //this is a jump label
/*800F5238 000F2038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800F523C 000F203C*/ PPC::Runtime::ASM::lis(context->r3, StructWithStructs_80 @ Get_MemoryOffset_HighBit);
/*800F5240 000F2040*/ PPC::Runtime::ASM::addi(context->r5, context->r3, StructWithStructs_80 @ Get_MemoryOffset_LowBit);
/*800F5244 000F2044*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800F5248 000F2048*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800F524C 000F204C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800F5250 000F2050*/ PPC::Runtime::ASM::lwzx(context->r6, context->r5, context->r0);
/*800F5254 000F2054*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800F5258 000F2058*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*800F525C 000F205C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800F5260 000F2060*/ PPC::Runtime::ASM::bctrl();
/*800F5264 000F2064*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F5268 000F2068*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F526C 000F206C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F5270 000F2070*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5274 000F2074*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800F5278 000F2078*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F527C 000F207C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800F5280 000F2080*/ PPC::Runtime::ASM::blr();
}