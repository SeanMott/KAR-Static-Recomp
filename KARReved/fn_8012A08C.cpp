//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_800547E0.hpp"
#include "fn_8011582C.hpp"



void fn_8012A08C(PPC::Runtime::GCContext* context)
{
/*8012A08C 00126E8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8012A090 00126E90*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012A094 00126E94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012A098 00126E98*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012A09C 00126E9C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012A0A0 00126EA0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012A0A4 00126EA4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8012A0A8 00126EA8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012A0AC 00126EAC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8012A0B0 00126EB0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012A0B4 00126EB4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012A0B8 00126EB8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8012A0BC 00126EBC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012A0C0 00126EC0*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*8012A0C4 00126EC4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012A0C8 00126EC8*/ PPC::Runtime::ASM::bne(.L_8012A0E8);
/*8012A0CC 00126ECC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012A0D0 00126ED0*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8012A0D4 00126ED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd60, context->r31));
/*8012A0D8 00126ED8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8012A0DC 00126EDC*/ PPC::Runtime::ASM::beq(.L_8012A0E8);
/*8012A0E0 00126EE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8012A0E4 00126EE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd60, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8012A0E8, 0x8012A0E8) //this is a jump label
/*8012A0E8 00126EE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012A0EC 00126EEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012A0F0 00126EF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012A0F4 00126EF4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012A0F8 00126EF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012A0FC 00126EFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8012A100 00126F00*/ PPC::Runtime::ASM::blr();
}