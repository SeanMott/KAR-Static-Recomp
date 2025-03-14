//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "memcpy.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_8046D7FC(PPC::Runtime::GCContext* context)
{
/*8046D7FC 0046A5FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046D800 0046A600*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8046D804 0046A604*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046D808 0046A608*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8046D80C 0046A60C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8046D810 0046A610*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8046D814 0046A614*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046D818 0046A618*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*8046D81C 0046A61C*/ PPC::Runtime::ASM::beq(.L_8046D828);
/*8046D820 0046A620*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8046D824 0046A624*/ PPC::Runtime::ASM::b(.L_8046D830);
RUNTIME_PPC_JUMP_LABEL(.L_8046D828, 0x8046D828) //this is a jump label
/*8046D828 0046A628*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*8046D82C 0046A62C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8046D830, 0x8046D830) //this is a jump label
/*8046D830 0046A630*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8046D834 0046A634*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*8046D838 0046A638*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8046D83C 0046A63C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x44);
/*8046D840 0046A640*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8046D844 0046A644*/ PPC::Runtime::ASM::bl(memcpy);
/*8046D848 0046A648*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8046D84C 0046A64C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8046D850 0046A650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8046D854 0046A654*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8046D858 0046A658*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8046D85C 0046A65C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046D860 0046A660*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8046D864 0046A664*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046D868 0046A668*/ PPC::Runtime::ASM::blr();
}