//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80349980(PPC::Runtime::GCContext* context)
{
/*80349980 00346780*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E456C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349984 00346784*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f2);
/*80349988 00346788*/ PPC::Runtime::ASM::beq(.L_80349DD4);
/*8034998C 0034678C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4610 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349990 00346790*/ PPC::Runtime::ASM::fadd(context->f0, context->f1, context->f0);
/*80349994 00346794*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80349998 00346798*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*8034999C 0034679C*/ PPC::Runtime::ASM::bge(.L_80349BBC);
/*803499A0 003467A0*/ PPC::Runtime::ASM::fneg(context->f3, context->f0);
/*803499A4 003467A4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E45C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803499A8 003467A8*/ PPC::Runtime::ASM::b(.L_803499B4);
RUNTIME_PPC_JUMP_LABEL(.L_803499AC, 0x803499AC) //this is a jump label
/*803499AC 003467AC*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*803499B0 003467B0*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_803499B4, 0x803499B4) //this is a jump label
/*803499B4 003467B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803499B8 003467B8*/ PPC::Runtime::ASM::bgt(.L_803499AC);
/*803499BC 003467BC*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4608 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803499C0 003467C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803499C4 003467C4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*803499C8 003467C8*/ PPC::Runtime::ASM::bne(.L_80349ABC);
/*803499CC 003467CC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4610 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803499D0 003467D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*803499D4 003467D4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*803499D8 003467D8*/ PPC::Runtime::ASM::bne(.L_80349A48);
/*803499DC 003467DC*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803499E0 003467E0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803499E4 003467E4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*803499E8 003467E8*/ PPC::Runtime::ASM::bne(.L_80349A18);
/*803499EC 003467EC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*803499F0 003467F0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803499F4 003467F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E461C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803499F8 003467F8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803499FC 003467FC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80349A00 00346800*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A04 00346804*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80349A08 00346808*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80349A0C 0034680C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80349A10 00346810*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349A14 00346814*/ PPC::Runtime::ASM::b(.L_80349BB4);
RUNTIME_PPC_JUMP_LABEL(.L_80349A18, 0x80349A18) //this is a jump label
/*80349A18 00346818*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80349A1C 0034681C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A20 00346820*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E462C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A24 00346824*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A28 00346828*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80349A2C 0034682C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4624 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A30 00346830*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80349A34 00346834*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80349A38 00346838*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80349A3C 0034683C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349A40 00346840*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80349A44 00346844*/ PPC::Runtime::ASM::b(.L_80349BB4);
RUNTIME_PPC_JUMP_LABEL(.L_80349A48, 0x80349A48) //this is a jump label
/*80349A48 00346848*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*80349A4C 0034684C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A50 00346850*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80349A54 00346854*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349A58 00346858*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349A5C 0034685C*/ PPC::Runtime::ASM::bne(.L_80349A8C);
/*80349A60 00346860*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80349A64 00346864*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A68 00346868*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E461C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A6C 0034686C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A70 00346870*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80349A74 00346874*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A78 00346878*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80349A7C 0034687C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80349A80 00346880*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80349A84 00346884*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349A88 00346888*/ PPC::Runtime::ASM::b(.L_80349BB4);
RUNTIME_PPC_JUMP_LABEL(.L_80349A8C, 0x80349A8C) //this is a jump label
/*80349A8C 0034688C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80349A90 00346890*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A94 00346894*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E462C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A98 00346898*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349A9C 0034689C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80349AA0 003468A0*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4624 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349AA4 003468A4*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80349AA8 003468A8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80349AAC 003468AC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80349AB0 003468B0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349AB4 003468B4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80349AB8 003468B8*/ PPC::Runtime::ASM::b(.L_80349BB4);
RUNTIME_PPC_JUMP_LABEL(.L_80349ABC, 0x80349ABC) //this is a jump label
/*80349ABC 003468BC*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*80349AC0 003468C0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4610 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349AC4 003468C4*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80349AC8 003468C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80349ACC 003468CC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349AD0 003468D0*/ PPC::Runtime::ASM::bne(.L_80349B40);
/*80349AD4 003468D4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349AD8 003468D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349ADC 003468DC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349AE0 003468E0*/ PPC::Runtime::ASM::bne(.L_80349B10);
/*80349AE4 003468E4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80349AE8 003468E8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349AEC 003468EC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E461C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349AF0 003468F0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349AF4 003468F4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80349AF8 003468F8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349AFC 003468FC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80349B00 00346900*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80349B04 00346904*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80349B08 00346908*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349B0C 0034690C*/ PPC::Runtime::ASM::b(.L_80349BB0);
RUNTIME_PPC_JUMP_LABEL(.L_80349B10, 0x80349B10) //this is a jump label
/*80349B10 00346910*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80349B14 00346914*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B18 00346918*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E462C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B1C 0034691C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B20 00346920*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80349B24 00346924*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4624 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B28 00346928*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80349B2C 0034692C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80349B30 00346930*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80349B34 00346934*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349B38 00346938*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80349B3C 0034693C*/ PPC::Runtime::ASM::b(.L_80349BB0);
RUNTIME_PPC_JUMP_LABEL(.L_80349B40, 0x80349B40) //this is a jump label
/*80349B40 00346940*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*80349B44 00346944*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B48 00346948*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80349B4C 0034694C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349B50 00346950*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349B54 00346954*/ PPC::Runtime::ASM::bne(.L_80349B84);
/*80349B58 00346958*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80349B5C 0034695C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B60 00346960*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E461C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B64 00346964*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B68 00346968*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80349B6C 0034696C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B70 00346970*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80349B74 00346974*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80349B78 00346978*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80349B7C 0034697C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349B80 00346980*/ PPC::Runtime::ASM::b(.L_80349BB0);
RUNTIME_PPC_JUMP_LABEL(.L_80349B84, 0x80349B84) //this is a jump label
/*80349B84 00346984*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80349B88 00346988*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B8C 0034698C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E462C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B90 00346990*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B94 00346994*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80349B98 00346998*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4624 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349B9C 0034699C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80349BA0 003469A0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80349BA4 003469A4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80349BA8 003469A8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349BAC 003469AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80349BB0, 0x80349BB0) //this is a jump label
/*80349BB0 003469B0*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80349BB4, 0x80349BB4) //this is a jump label
/*80349BB4 003469B4*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*80349BB8 003469B8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80349BBC, 0x80349BBC) //this is a jump label
/*80349BBC 003469BC*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
/*80349BC0 003469C0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E45C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349BC4 003469C4*/ PPC::Runtime::ASM::b(.L_80349BD0);
RUNTIME_PPC_JUMP_LABEL(.L_80349BC8, 0x80349BC8) //this is a jump label
/*80349BC8 003469C8*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*80349BCC 003469CC*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80349BD0, 0x80349BD0) //this is a jump label
/*80349BD0 003469D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349BD4 003469D4*/ PPC::Runtime::ASM::bgt(.L_80349BC8);
/*80349BD8 003469D8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4608 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349BDC 003469DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349BE0 003469E0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349BE4 003469E4*/ PPC::Runtime::ASM::bne(.L_80349CD8);
/*80349BE8 003469E8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4610 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349BEC 003469EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80349BF0 003469F0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349BF4 003469F4*/ PPC::Runtime::ASM::bne(.L_80349C64);
/*80349BF8 003469F8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349BFC 003469FC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349C00 00346A00*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349C04 00346A04*/ PPC::Runtime::ASM::bne(.L_80349C34);
/*80349C08 00346A08*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80349C0C 00346A0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C10 00346A10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E461C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C14 00346A14*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C18 00346A18*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80349C1C 00346A1C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C20 00346A20*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80349C24 00346A24*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80349C28 00346A28*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80349C2C 00346A2C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*80349C30 00346A30*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80349C34, 0x80349C34) //this is a jump label
/*80349C34 00346A34*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80349C38 00346A38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C3C 00346A3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E462C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C40 00346A40*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C44 00346A44*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80349C48 00346A48*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4624 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C4C 00346A4C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80349C50 00346A50*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80349C54 00346A54*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80349C58 00346A58*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349C5C 00346A5C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*80349C60 00346A60*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80349C64, 0x80349C64) //this is a jump label
/*80349C64 00346A64*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*80349C68 00346A68*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C6C 00346A6C*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80349C70 00346A70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349C74 00346A74*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349C78 00346A78*/ PPC::Runtime::ASM::bne(.L_80349CA8);
/*80349C7C 00346A7C*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80349C80 00346A80*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C84 00346A84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E461C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C88 00346A88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C8C 00346A8C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80349C90 00346A90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349C94 00346A94*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80349C98 00346A98*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80349C9C 00346A9C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80349CA0 00346AA0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*80349CA4 00346AA4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80349CA8, 0x80349CA8) //this is a jump label
/*80349CA8 00346AA8*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80349CAC 00346AAC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349CB0 00346AB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E462C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349CB4 00346AB4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349CB8 00346AB8*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80349CBC 00346ABC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4624 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349CC0 00346AC0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80349CC4 00346AC4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80349CC8 00346AC8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80349CCC 00346ACC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349CD0 00346AD0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*80349CD4 00346AD4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80349CD8, 0x80349CD8) //this is a jump label
/*80349CD8 00346AD8*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*80349CDC 00346ADC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4610 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349CE0 00346AE0*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80349CE4 00346AE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80349CE8 00346AE8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349CEC 00346AEC*/ PPC::Runtime::ASM::bne(.L_80349D5C);
/*80349CF0 00346AF0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349CF4 00346AF4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349CF8 00346AF8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349CFC 00346AFC*/ PPC::Runtime::ASM::bne(.L_80349D2C);
/*80349D00 00346B00*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80349D04 00346B04*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D08 00346B08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E461C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D0C 00346B0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D10 00346B10*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80349D14 00346B14*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D18 00346B18*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80349D1C 00346B1C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80349D20 00346B20*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80349D24 00346B24*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349D28 00346B28*/ PPC::Runtime::ASM::b(.L_80349DCC);
RUNTIME_PPC_JUMP_LABEL(.L_80349D2C, 0x80349D2C) //this is a jump label
/*80349D2C 00346B2C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80349D30 00346B30*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D34 00346B34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E462C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D38 00346B38*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D3C 00346B3C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80349D40 00346B40*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4624 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D44 00346B44*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80349D48 00346B48*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80349D4C 00346B4C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80349D50 00346B50*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349D54 00346B54*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80349D58 00346B58*/ PPC::Runtime::ASM::b(.L_80349DCC);
RUNTIME_PPC_JUMP_LABEL(.L_80349D5C, 0x80349D5C) //this is a jump label
/*80349D5C 00346B5C*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*80349D60 00346B60*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D64 00346B64*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80349D68 00346B68*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80349D6C 00346B6C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80349D70 00346B70*/ PPC::Runtime::ASM::bne(.L_80349DA0);
/*80349D74 00346B74*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80349D78 00346B78*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4620 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D7C 00346B7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E461C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D80 00346B80*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D84 00346B84*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80349D88 00346B88*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349D8C 00346B8C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80349D90 00346B90*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80349D94 00346B94*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80349D98 00346B98*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349D9C 00346B9C*/ PPC::Runtime::ASM::b(.L_80349DCC);
RUNTIME_PPC_JUMP_LABEL(.L_80349DA0, 0x80349DA0) //this is a jump label
/*80349DA0 00346BA0*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80349DA4 00346BA4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349DA8 00346BA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E462C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349DAC 00346BAC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349DB0 00346BB0*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80349DB4 00346BB4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4624 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349DB8 00346BB8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80349DBC 00346BBC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80349DC0 00346BC0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80349DC4 00346BC4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80349DC8 00346BC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80349DCC, 0x80349DCC) //this is a jump label
/*80349DCC 00346BCC*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*80349DD0 00346BD0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80349DD4, 0x80349DD4) //this is a jump label
/*80349DD4 00346BD4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80349DD8 00346BD8*/ PPC::Runtime::ASM::blr();
}