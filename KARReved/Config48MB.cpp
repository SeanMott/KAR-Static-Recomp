//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void Config48MB(PPC::Runtime::GCContext* context)
{
/*803D7C70 003D4A70*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803D7C74 003D4A74*/ PPC::Runtime::ASM::lis(context->r4, 0x0);
/*803D7C78 003D4A78*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
/*803D7C7C 003D4A7C*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803D7C80 003D4A80*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x3ff);
/*803D7C84 003D4A84*/ PPC::Runtime::ASM::lis(context->r6, 0x200);
/*803D7C88 003D4A88*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*803D7C8C 003D4A8C*/ PPC::Runtime::ASM::lis(context->r5, 0x8200);
/*803D7C90 003D4A90*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1ff);
/*803D7C94 003D4A94*/ PPC::Runtime::ASM::isync();
/* 803D7C98 003D4A98  7C F8 83 A6 */ mtdbatu 0 , context->r7
/* 803D7C9C 003D4A9C  7C 99 83 A6 */ mtdbatl 0 , context->r4
/* 803D7CA0 003D4AA0  7C 78 83 A6 */ mtdbatu 0 , context->r3
/*803D7CA4 003D4AA4*/ PPC::Runtime::ASM::isync();
/* 803D7CA8 003D4AA8  7C F0 83 A6 */ mtibatu 0 , context->r7
/* 803D7CAC 003D4AAC  7C 91 83 A6 */ mtibatl 0 , context->r4
/* 803D7CB0 003D4AB0  7C 70 83 A6 */ mtibatu 0 , context->r3
/*803D7CB4 003D4AB4*/ PPC::Runtime::ASM::isync();
/* 803D7CB8 003D4AB8  7C FC 83 A6 */ mtdbatu 2 , context->r7
/* 803D7CBC 003D4ABC  7C DD 83 A6 */ mtdbatl 2 , context->r6
/* 803D7CC0 003D4AC0  7C BC 83 A6 */ mtdbatu 2 , context->r5
/*803D7CC4 003D4AC4*/ PPC::Runtime::ASM::isync();
/* 803D7CC8 003D4AC8  7C F4 83 A6 */ mtibatu 2 , context->r7
/* 803D7CCC 003D4ACC  7C D5 83 A6 */ mtibatl 2 , context->r6
/* 803D7CD0 003D4AD0  7C B4 83 A6 */ mtibatu 2 , context->r5
/*803D7CD4 003D4AD4*/ PPC::Runtime::ASM::isync();
/*803D7CD8 003D4AD8*/ PPC::Runtime::ASM::mfmsr(context->r3);
/*803D7CDC 003D4ADC*/ PPC::Runtime::ASM::ori(context->r3, context->r3, 0x30);
/*803D7CE0 003D4AE0*/ PPC::Runtime::ASM::mtsrr1(context->r3);
/*803D7CE4 003D4AE4*/ PPC::Runtime::ASM::mflr(context->r3);
/*803D7CE8 003D4AE8*/ PPC::Runtime::ASM::mtsrr0(context->r3);
/*803D7CEC 003D4AEC*/ PPC::Runtime::ASM::rfi();
}