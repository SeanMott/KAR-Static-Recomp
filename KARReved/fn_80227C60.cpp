//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80221F54.hpp"
#include "fn_80222144.hpp"
#include "fn_802221B8.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80227D38.hpp"



void fn_80227C60(PPC::Runtime::GCContext* context)
{
/*80227C60 00224A60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80227C64 00224A64*/ PPC::Runtime::ASM::mflr(context->r0);
/*80227C68 00224A68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80227C6C 00224A6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80227C70 00224A70*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80227C74 00224A74*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80227C78 00224A78*/ PPC::Runtime::ASM::bl(fn_80221F54);
/*80227C7C 00224A7C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r30));
/* 80227C80 00224A80  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80227C84 00224A84*/ PPC::Runtime::ASM::beq(.L_80227CEC);
/*80227C88 00224A88*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80227C8C 00224A8C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80227C90 00224A90*/ PPC::Runtime::ASM::bl(fn_80222144);
/*80227C94 00224A94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80227C98 00224A98*/ PPC::Runtime::ASM::bne(.L_80227CA4);
/*80227C9C 00224A9C*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*80227CA0 00224AA0*/ PPC::Runtime::ASM::b(.L_80227CDC);
RUNTIME_PPC_JUMP_LABEL(.L_80227CA4, 0x80227CA4) //this is a jump label
/*80227CA4 00224AA4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80227CA8 00224AA8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80227CAC 00224AAC*/ PPC::Runtime::ASM::bl(fn_802221B8);
/*80227CB0 00224AB0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*80227CB4 00224AB4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80227CB8 00224AB8*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*80227CBC 00224ABC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*80227CC0 00224AC0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E29C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80227CC4 00224AC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80227CC8 00224AC8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*80227CCC 00224ACC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80227CD0 00224AD0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80227CD4 00224AD4*/ PPC::Runtime::ASM::bne(.L_80227CDC);
/*80227CD8 00224AD8*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80227CDC, 0x80227CDC) //this is a jump label
/*80227CDC 00224ADC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80227CE0 00224AE0*/ PPC::Runtime::ASM::beq(.L_80227CEC);
/*80227CE4 00224AE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80227CE8 00224AE8*/ PPC::Runtime::ASM::bl(fn_80227D38);
RUNTIME_PPC_JUMP_LABEL(.L_80227CEC, 0x80227CEC) //this is a jump label
/*80227CEC 00224AEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80227CF0 00224AF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80227CF4 00224AF4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80227CF8 00224AF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80227CFC 00224AFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80227D00 00224B00*/ PPC::Runtime::ASM::blr();
}