//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029193C(PPC::Runtime::GCContext* context)
{
/*8029193C 0028E73C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80291940 0028E740*/ PPC::Runtime::ASM::mflr(context->r0);
/*80291944 0028E744*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291948 0028E748*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8029194C 0028E74C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80291950 0028E750*/ PPC::Runtime::ASM::beq(.L_80291974);
/*80291954 0028E754*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BCE4C @ Get_MemoryOffset_HighBit);
/*80291958 0028E758*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*8029195C 0028E75C*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804BCE4C @ Get_MemoryOffset_LowBit);
/*80291960 0028E760*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80291964 0028E764*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80291968 0028E768*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029196C 0028E76C*/ PPC::Runtime::ASM::ble(.L_80291974);
/*80291970 0028E770*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80291974, 0x80291974) //this is a jump label
/*80291974 0028E774*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291978 0028E778*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029197C 0028E77C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80291980 0028E780*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80291984 0028E784*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80291988 0028E788*/ PPC::Runtime::ASM::blr();
}