//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8039A638(PPC::Runtime::GCContext* context)
{
/*8039A638 00397438*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039A63C 0039743C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039A640 00397440*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BC15C @ Get_MemoryOffset_HighBit);
/*8039A644 00397444*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A648 00397448*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804BC15C @ Get_MemoryOffset_LowBit);
/*8039A64C 0039744C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8039A650 00397450*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A654 00397454*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8039A658 00397458*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A65C 0039745C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039A660 00397460*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039A664 00397464*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8039A668 00397468*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8039A66C 0039746C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039A670 00397470*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039A674 00397474*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A678 00397478*/ PPC::Runtime::ASM::bctrl();
/*8039A67C 0039747C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC184 @ Get_MemoryOffset_HighBit);
/*8039A680 00397480*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8039A684 00397484*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BC184 @ Get_MemoryOffset_LowBit);
/*8039A688 00397488*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A68C 0039748C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A690 00397490*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8039A694 00397494*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8039A698 00397498*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A69C 0039749C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8039A6A0 003974A0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A6A4 003974A4*/ PPC::Runtime::ASM::bctrl();
/*8039A6A8 003974A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6278 @ Get_MemoryOffset_HighBit);
/*8039A6AC 003974AC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*8039A6B0 003974B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F6278 @ Get_MemoryOffset_LowBit);
/*8039A6B4 003974B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*8039A6B8 003974B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A6BC 003974BC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8039A6C0 003974C0*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x1c);
/*8039A6C4 003974C4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*8039A6C8 003974C8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8039A6CC 003974CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*8039A6D0 003974D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A6D4 003974D4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8039A6D8 003974D8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8039A6DC 003974DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8039A6E0 003974E0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8039A6E4 003974E4*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8039A6E8 003974E8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8039A6EC 003974EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A6F0 003974F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A6F4 003974F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A6F8 003974F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039A6FC 003974FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039A700 00397500*/ PPC::Runtime::ASM::blr();
}