//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8042A1A8(PPC::Runtime::GCContext* context)
{
/*8042A1A8 00426FA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8042A1AC 00426FAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042A1B0 00426FB0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_HighBit);
/*8042A1B4 00426FB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042A1B8 00426FB8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_LowBit);
/*8042A1BC 00426FBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8042A1C0 00426FC0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8042A1C4 00426FC4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*8042A1C8 00426FC8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE32C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A1CC 00426FCC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8042A1D0 00426FD0*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*8042A1D4 00426FD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8042A1D8 00426FD8*/ PPC::Runtime::ASM::b(.L_8042A20C);
RUNTIME_PPC_JUMP_LABEL(.L_8042A1DC, 0x8042A1DC) //this is a jump label
/*8042A1DC 00426FDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8042A1E0 00426FE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8042A1E4 00426FE4*/ PPC::Runtime::ASM::beq(.L_8042A208);
/*8042A1E8 00426FE8*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DE320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A1EC 00426FEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8042A1F0 00426FF0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8042A1F4 00426FF4*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DE320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A1F8 00426FF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8042A1FC 00426FFC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8042A200 00427000*/ PPC::Runtime::ASM::bctrl();
/*8042A204 00427004*/ PPC::Runtime::ASM::stw(context->r31, STRUCT_BYTE4_COUNT_1805DE320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8042A208, 0x8042A208) //this is a jump label
/*8042A208 00427008*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8042A20C, 0x8042A20C) //this is a jump label
/*8042A20C 0042700C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8042A210 00427010*/ PPC::Runtime::ASM::bne(.L_8042A1DC);
/*8042A214 00427014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042A218 00427018*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8042A21C 0042701C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8042A220 00427020*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042A224 00427024*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8042A228 00427028*/ PPC::Runtime::ASM::blr();
}