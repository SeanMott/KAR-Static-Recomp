//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295800(PPC::Runtime::GCContext* context)
{
/*80295800 00292600*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDADC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295804 00292604*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80295808 00292608*/ PPC::Runtime::ASM::beq(.L_80295820);
/*8029580C 0029260C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295810 00292610*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDADC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295814 00292614*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80295818 00292618*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDADC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029581C 0029261C*/ PPC::Runtime::ASM::b(.L_80295828);
RUNTIME_PPC_JUMP_LABEL(.L_80295820, 0x80295820) //this is a jump label
/*80295820 00292620*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDAE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295824 00292624*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDADC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80295828, 0x80295828) //this is a jump label
/*80295828 00292628*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029582C 0029262C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80295830 00292630*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDAD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295834 00292634*/ PPC::Runtime::ASM::blr();
}