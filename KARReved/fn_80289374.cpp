//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062DD0.hpp"
#include "fn_800638F8.hpp"
#include "fn_800638F8.hpp"
#include "fn_800638F8.hpp"
#include "fn_800638F8.hpp"
#include "fn_800638F8.hpp"
#include "fn_800638F8.hpp"
#include "fn_800641E4.hpp"



void fn_80289374(PPC::Runtime::GCContext* context)
{
/*80289374 00286174*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80289378 00286178*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028937C 0028617C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D75F8 @ Get_MemoryOffset_SDA21);
/*80289380 00286180*/ PPC::Runtime::ASM::li(context->r6, lbl_805D75F0 @ Get_MemoryOffset_SDA21);
/*80289384 00286184*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80289388 00286188*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8028938C 0028618C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80289390 00286190*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80289394 00286194*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80289398 00286198*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028939C 0028619C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802893A0 002861A0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802893A4 002861A4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802893A8 002861A8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802893AC 002861AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802893B0 002861B0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802893B4 002861B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802893B8 002861B8*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyeVector?);
/*802893BC 002861BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802893C0 002861C0*/ PPC::Runtime::ASM::beq(.L_8028949C);
/*802893C4 002861C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802893C8 002861C8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802893CC 002861CC*/ PPC::Runtime::ASM::bl(fn_804020D0);
/*802893D0 002861D0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802893D4 002861D4*/ PPC::Runtime::ASM::beq(.L_8028949C);
/*802893D8 002861D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802893DC 002861DC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802893E0 002861E0*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*802893E4 002861E4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802893E8 002861E8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802893EC 002861EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802893F0 002861F0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802893F4 002861F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802893F8 002861F8*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*802893FC 002861FC*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*80289400 00286200*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80289404 00286204*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80289408 00286208*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8028940C 0028620C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80289410 00286210*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80289414 00286214*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80289418 00286218*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028941C 0028621C*/ PPC::Runtime::ASM::beq(.L_80289480);
/*80289420 00286220*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80289424 00286224*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80289428 00286228*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8028942C 0028622C*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*80289430 00286230*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80289434 00286234*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80289438 00286238*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8028943C 0028623C*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*80289440 00286240*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80289444 00286244*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80289448 00286248*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8028944C 0028624C*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*80289450 00286250*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80289454 00286254*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*80289458 00286258*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8028945C 0028625C*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*80289460 00286260*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80289464 00286264*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*80289468 00286268*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8028946C 0028626C*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*80289470 00286270*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80289474 00286274*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80289478 00286278*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8028947C 0028627C*/ PPC::Runtime::ASM::bl(fn_800638F8);
RUNTIME_PPC_JUMP_LABEL(.L_80289480, 0x80289480) //this is a jump label
/*80289480 00286280*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80289484 00286284*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80289488 00286288*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8028948C 0028628C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*80289490 00286290*/ PPC::Runtime::ASM::bl(fn_800641E4);
/*80289494 00286294*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80289498 00286298*/ PPC::Runtime::ASM::b(.L_802894A0);
RUNTIME_PPC_JUMP_LABEL(.L_8028949C, 0x8028949C) //this is a jump label
/*8028949C 0028629C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802894A0, 0x802894A0) //this is a jump label
/*802894A0 002862A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802894A4 002862A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802894A8 002862A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802894AC 002862AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802894B0 002862B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802894B4 002862B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*802894B8 002862B8*/ PPC::Runtime::ASM::blr();
}