//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8016A638(PPC::Runtime::GCContext* context)
{
/*8016A638 00167438*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016A63C 0016743C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016A640 00167440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016A644 00167444*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8016A648 00167448*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8016A64C 0016744C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8016A650 00167450*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8016A654 00167454*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8016A658 00167458*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*8016A65C 0016745C*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*8016A660 00167460*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016A664 00167464*/ PPC::Runtime::ASM::extsb(context->r4, context->r27);
/*8016A668 00167468*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8016A66C 0016746C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8016A670 00167470*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac8, context->r3));
/*8016A674 00167474*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016A678 00167478*/ PPC::Runtime::ASM::beq(.L_8016A6A4);
/*8016A67C 0016747C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016A680 00167480*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016A684 00167484*/ PPC::Runtime::ASM::mulli(context->r3, context->r4, 0xa);
/*8016A688 00167488*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r5));
/*8016A68C 0016748C*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r5));
/*8016A690 00167490*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x41);
/*8016A694 00167494*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r5));
/*8016A698 00167498*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r5));
/*8016A69C 0016749C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r5));
/*8016A6A0 001674A0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8016A6A4, 0x8016A6A4) //this is a jump label
/*8016A6A4 001674A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8016A6A8 001674A8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8016A6AC 001674AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016A6B0 001674B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016A6B4 001674B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016A6B8 001674B8*/ PPC::Runtime::ASM::blr();
}