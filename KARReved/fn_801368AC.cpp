//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80164914.hpp"
#include "fn_80165314.hpp"
#include "fn_80165AB0.hpp"
#include "fn_80167250.hpp"
#include "fn_801662EC.hpp"



void fn_801368AC(PPC::Runtime::GCContext* context)
{
/*801368AC 001336AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801368B0 001336B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801368B4 001336B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801368B8 001336B8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801368BC 001336BC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*801368C0 001336C0*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*801368C4 001336C4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801368C8 001336C8*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*801368CC 001336CC*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*801368D0 001336D0*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*801368D4 001336D4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801368D8 001336D8*/ PPC::Runtime::ASM::bl(fn_80164914);
/*801368DC 001336DC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*801368E0 001336E0*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*801368E4 001336E4*/ PPC::Runtime::ASM::bl(fn_80165314);
/*801368E8 001336E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801368EC 001336EC*/ PPC::Runtime::ASM::bl(fn_80165AB0);
/*801368F0 001336F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801368F4 001336F4*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*801368F8 001336F8*/ PPC::Runtime::ASM::bl(fn_80167250);
/*801368FC 001336FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80136900 00133700*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80136904 00133704*/ PPC::Runtime::ASM::bl(fn_801662EC);
/*80136908 00133708*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8013690C 0013370C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80136910 00133710*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80136914 00133714*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136918 00133718*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8013691C 0013371C*/ PPC::Runtime::ASM::blr();
}