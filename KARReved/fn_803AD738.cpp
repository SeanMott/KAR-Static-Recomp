//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803AD738(PPC::Runtime::GCContext* context)
{
/*803AD738 003AA538*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r12));
/*803AD73C 003AA53C*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r12));
/*803AD740 003AA540*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803AD744 003AA544*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*803AD748 003AA548*/ PPC::Runtime::ASM::cmpwi(context->r11, 0x0);
/*803AD74C 003AA54C*/ PPC::Runtime::ASM::blt(.L_803AD758);
/*803AD750 003AA550*/ PPC::Runtime::ASM::lwzx(context->r12, context->r3, context->r12);
/*803AD754 003AA554*/ PPC::Runtime::ASM::lwzx(context->r12, context->r12, context->r11);
RUNTIME_PPC_JUMP_LABEL(.L_803AD758, 0x803AD758) //this is a jump label
/*803AD758 003AA558*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AD75C 003AA55C*/ PPC::Runtime::ASM::bctr();
}