//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80291D9C(PPC::Runtime::GCContext* context)
{
/*80291D9C 0028EB9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80291DA0 0028EBA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80291DA4 0028EBA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291DA8 0028EBA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80291DAC 0028EBAC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80291DB0 0028EBB0*/ PPC::Runtime::ASM::beq(.L_80291DD4);
/*80291DB4 0028EBB4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BD20C @ Get_MemoryOffset_HighBit);
/*80291DB8 0028EBB8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80291DBC 0028EBBC*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804BD20C @ Get_MemoryOffset_LowBit);
/*80291DC0 0028EBC0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80291DC4 0028EBC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80291DC8 0028EBC8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80291DCC 0028EBCC*/ PPC::Runtime::ASM::ble(.L_80291DD4);
/*80291DD0 0028EBD0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80291DD4, 0x80291DD4) //this is a jump label
/*80291DD4 0028EBD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291DD8 0028EBD8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80291DDC 0028EBDC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80291DE0 0028EBE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80291DE4 0028EBE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80291DE8 0028EBE8*/ PPC::Runtime::ASM::blr();
}