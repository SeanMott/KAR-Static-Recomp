//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295FB0(PPC::Runtime::GCContext* context)
{
/*80295FB0 00292DB0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDB18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295FB4 00292DB4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80295FB8 00292DB8*/ PPC::Runtime::ASM::beq(.L_80295FD4);
/*80295FBC 00292DBC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDB1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295FC0 00292DC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295FC4 00292DC4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDB1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295FC8 00292DC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80295FCC 00292DCC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295FD0 00292DD0*/ PPC::Runtime::ASM::b(.L_80295FDC);
RUNTIME_PPC_JUMP_LABEL(.L_80295FD4, 0x80295FD4) //this is a jump label
/*80295FD4 00292DD4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295FD8 00292DD8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80295FDC, 0x80295FDC) //this is a jump label
/*80295FDC 00292DDC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB14 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295FE0 00292DE0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80295FE4 00292DE4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB14 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295FE8 00292DE8*/ PPC::Runtime::ASM::blr();
}