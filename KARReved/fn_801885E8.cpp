//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80078284.hpp"
#include "fn_80077F14.hpp"
#include "fn_800780D0.hpp"
#include "fn_80077A5C.hpp"



void fn_801885E8(PPC::Runtime::GCContext* context)
{
/*801885E8 001853E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801885EC 001853EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801885F0 001853F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801885F4 001853F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD804 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801885F8 001853F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801885FC 001853FC*/ PPC::Runtime::ASM::beq(.L_8018863C);
/*80188600 00185400*/ PPC::Runtime::ASM::bl(fn_80078284);
/*80188604 00185404*/ PPC::Runtime::ASM::b(.L_8018860C);
RUNTIME_PPC_JUMP_LABEL(.L_80188608, 0x80188608) //this is a jump label
/*80188608 00185408*/ PPC::Runtime::ASM::bl(fn_VIWaitForRetrace);
RUNTIME_PPC_JUMP_LABEL(.L_8018860C, 0x8018860C) //this is a jump label
/*8018860C 0018540C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD804 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188610 00185410*/ PPC::Runtime::ASM::bl(fn_80077F14);
/*80188614 00185414*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80188618 00185418*/ PPC::Runtime::ASM::bne(.L_80188608);
/*8018861C 0018541C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD804 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188620 00185420*/ PPC::Runtime::ASM::bl(fn_800780D0);
/*80188624 00185424*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80188628 00185428*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD804 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018862C 0018542C*/ PPC::Runtime::ASM::bl(fn_80077A5C);
/*80188630 00185430*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80188634 00185434*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188638 00185438*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8018863C, 0x8018863C) //this is a jump label
/*8018863C 0018543C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80188640 00185440*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80188644 00185444*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80188648 00185448*/ PPC::Runtime::ASM::blr();
}