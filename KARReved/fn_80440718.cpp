//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_CObjSetCurrent?.hpp"
#include "fn_80439C40.hpp"
#include "fn_80439854.hpp"



void fn_80440718(PPC::Runtime::GCContext* context)
{
/*80440718 0043D518*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8044071C 0043D51C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80440720 0043D520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80440724 0043D524*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80440728 0043D528*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetCurrent?);
/*8044072C 0043D52C*/ PPC::Runtime::ASM::bl(fn_80439C40);
/*80440730 0043D530*/ PPC::Runtime::ASM::bl(fn_80439854);
/*80440734 0043D534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80440738 0043D538*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8044073C 0043D53C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80440740 0043D540*/ PPC::Runtime::ASM::blr();
}