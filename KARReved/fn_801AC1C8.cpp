//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FD5C.hpp"
#include "fn_801B4E2C.hpp"
#include "fn_801B8078.hpp"
#include "fn_801AC9FC.hpp"
#include "fn_801ACC18.hpp"
#include "fn_801ACDF8.hpp"
#include "fn_80194120.hpp"
#include "fn_801A8454.hpp"



void fn_801AC1C8(PPC::Runtime::GCContext* context)
{
/*801AC1C8 001A8FC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AC1CC 001A8FCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AC1D0 001A8FD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC1D4 001A8FD4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC1D8 001A8FD8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AC1DC 001A8FDC*/ PPC::Runtime::ASM::bl(fn_8019FD5C);
/*801AC1E0 001A8FE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC1E4 001A8FE4*/ PPC::Runtime::ASM::bl(fn_801B4E2C);
/*801AC1E8 001A8FE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC1EC 001A8FEC*/ PPC::Runtime::ASM::bne(.L_801AC248);
/*801AC1F0 001A8FF0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC1F4 001A8FF4*/ PPC::Runtime::ASM::bl(fn_801B8078);
/*801AC1F8 001A8FF8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC1FC 001A8FFC*/ PPC::Runtime::ASM::bne(.L_801AC248);
/*801AC200 001A9000*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC204 001A9004*/ PPC::Runtime::ASM::bl(fn_801AC9FC);
/*801AC208 001A9008*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC20C 001A900C*/ PPC::Runtime::ASM::bne(.L_801AC248);
/*801AC210 001A9010*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC214 001A9014*/ PPC::Runtime::ASM::bl(fn_801ACC18);
/*801AC218 001A9018*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC21C 001A901C*/ PPC::Runtime::ASM::bne(.L_801AC248);
/*801AC220 001A9020*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC224 001A9024*/ PPC::Runtime::ASM::bl(fn_801ACDF8);
/*801AC228 001A9028*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC22C 001A902C*/ PPC::Runtime::ASM::bne(.L_801AC248);
/*801AC230 001A9030*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC234 001A9034*/ PPC::Runtime::ASM::bl(fn_80194120);
/*801AC238 001A9038*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC23C 001A903C*/ PPC::Runtime::ASM::bne(.L_801AC248);
/*801AC240 001A9040*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC244 001A9044*/ PPC::Runtime::ASM::bl(fn_801A8454);
RUNTIME_PPC_JUMP_LABEL(.L_801AC248, 0x801AC248) //this is a jump label
/*801AC248 001A9048*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC24C 001A904C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC250 001A9050*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AC254 001A9054*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AC258 001A9058*/ PPC::Runtime::ASM::blr();
}