//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80066DF8.hpp"
#include "fn_8011586C.hpp"
#include "fn_8011586C.hpp"
#include "fn_80066EE0.hpp"



void fn_801158C0(PPC::Runtime::GCContext* context)
{
/*801158C0 001126C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801158C4 001126C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801158C8 001126C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801158CC 001126CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801158D0 001126D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801158D4 001126D4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801158D8 001126D8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801158DC 001126DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801158E0 001126E0*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*801158E4 001126E4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801158E8 001126E8*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*801158EC 001126EC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801158F0 001126F0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*801158F4 001126F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801158F8 001126F8*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*801158FC 001126FC*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80115900 00112700*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80115904 00112704*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*80115908 00112708*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*8011590C 0011270C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80115910 00112710*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115914 00112714*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80115918 00112718*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*8011591C 0011271C*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80115920 00112720*/ PPC::Runtime::ASM::lis(context->r4, fn_8011586C @ Get_MemoryOffset_HighBit);
/*80115924 00112724*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80115928 00112728*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8011586C @ Get_MemoryOffset_LowBit);
/*8011592C 0011272C*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80115930 00112730*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80115934 00112734*/ PPC::Runtime::ASM::lis(context->r3, 0x22);
/*80115938 00112738*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011593C 0011273C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115940 00112740*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80115944 00112744*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80115948 00112748*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8011594C 0011274C*/ PPC::Runtime::ASM::bl(fn_80066EE0);
/*80115950 00112750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80115954 00112754*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80115958 00112758*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011595C 0011275C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80115960 00112760*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80115964 00112764*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80115968 00112768*/ PPC::Runtime::ASM::blr();
}