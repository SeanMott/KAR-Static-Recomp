//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80068768(PPC::Runtime::GCContext* context)
{
/*80068768 00065568*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*8006876C 0006556C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80068770 00065570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80068774 00065574*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80068778 00065578*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8006877C 0006557C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80068780 00065580*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80068784 00065584*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80068788 00065588*/ PPC::Runtime::ASM::bne(.L_80068794);
/*8006878C 0006558C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80068790 00065590*/ PPC::Runtime::ASM::b(.L_80068AF4);
RUNTIME_PPC_JUMP_LABEL(.L_80068794, 0x80068794) //this is a jump label
/*80068794 00065594*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80068798 00065598*/ PPC::Runtime::ASM::bne(.L_8006885C);
/*8006879C 0006559C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800687A0 000655A0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8);
/*800687A4 000655A4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetViewportf);
/*800687A8 000655A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800687AC 000655AC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800687B0 000655B0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800687B4 000655B4*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800687B8 000655B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800687BC 000655BC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800687C0 000655C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*800687C4 000655C4*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800687C8 000655C8*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800687CC 000655CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800687D0 000655D0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800687D4 000655D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800687D8 000655D8*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800687DC 000655DC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800687E0 000655E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800687E4 000655E4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*800687E8 000655E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800687EC 000655EC*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800687F0 000655F0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800687F4 000655F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800687F8 000655F8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*800687FC 000655FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80068800 00065600*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetScissor);
/*80068804 00065604*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80068808 00065608*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8006880C 0006560C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80068810 00065610*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetViewportf);
/*80068814 00065614*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80068818 00065618*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8006881C 0006561C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80068820 00065620*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80068824 00065624*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80068828 00065628*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f0);
/*8006882C 0006562C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80068830 00065630*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80068834 00065634*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80068838 00065638*/ PPC::Runtime::ASM::fdivs(context->f1, context->f3, context->f1);
/*8006883C 0006563C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80068840 00065640*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*80068844 00065644*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetAspect);
/*80068848 00065648*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8006884C 0006564C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80068850 00065650*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80068854 00065654*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80068858 00065658*/ PPC::Runtime::ASM::b(.L_80068AF4);
RUNTIME_PPC_JUMP_LABEL(.L_8006885C, 0x8006885C) //this is a jump label
/*8006885C 0006565C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80068860 00065660*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*80068864 00065664*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80068868 00065668*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x28);
/*8006886C 0006566C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80068870 00065670*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80068874 00065674*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80068878 00065678*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805DEB50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006887C 0006567C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80068880 00065680*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80068884 00065684*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80068888 00065688*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*8006888C 0006568C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80068890 00065690*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80068894 00065694*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80068898 00065698*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*8006889C 0006569C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800688A0 000656A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800688A4 000656A4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800688A8 000656A8*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*800688AC 000656AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800688B0 000656B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800688B4 000656B4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*800688B8 000656B8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800688BC 000656BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*800688C0 000656C0*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*800688C4 000656C4*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*800688C8 000656C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800688CC 000656CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800688D0 000656D0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800688D4 000656D4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*800688D8 000656D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800688DC 000656DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800688E0 000656E0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*800688E4 000656E4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800688E8 000656E8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*800688EC 000656EC*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*800688F0 000656F0*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*800688F4 000656F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800688F8 000656F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800688FC 000656FC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80068900 00065700*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80068904 00065704*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80068908 00065708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8006890C 0006570C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*80068910 00065710*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80068914 00065714*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*80068918 00065718*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*8006891C 0006571C*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*80068920 00065720*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80068924 00065724*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80068928 00065728*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetViewportf);
/*8006892C 0006572C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80068930 00065730*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80068934 00065734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80068938 00065738*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*8006893C 0006573C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80068940 00065740*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80068944 00065744*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80068948 00065748*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805DEB50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006894C 0006574C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80068950 00065750*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f3);
/*80068954 00065754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80068958 00065758*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f4);
/*8006895C 0006575C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80068960 00065760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80068964 00065764*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80068968 00065768*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8006896C 0006576C*/ PPC::Runtime::ASM::fadds(context->f1, context->f3, context->f1);
/*80068970 00065770*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80068974 00065774*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80068978 00065778*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8006897C 0006577C*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*80068980 00065780*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80068984 00065784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80068988 00065788*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f3);
/*8006898C 0006578C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80068990 00065790*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*80068994 00065794*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80068998 00065798*/ PPC::Runtime::ASM::fadds(context->f1, context->f3, context->f1);
/*8006899C 0006579C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800689A0 000657A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800689A4 000657A4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800689A8 000657A8*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*800689AC 000657AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800689B0 000657B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800689B4 000657B4*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f3);
/*800689B8 000657B8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*800689BC 000657BC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*800689C0 000657C0*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*800689C4 000657C4*/ PPC::Runtime::ASM::fadds(context->f1, context->f3, context->f1);
/*800689C8 000657C8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800689CC 000657CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800689D0 000657D0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*800689D4 000657D4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*800689D8 000657D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800689DC 000657DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*800689E0 000657E0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f3);
/*800689E4 000657E4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*800689E8 000657E8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*800689EC 000657EC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*800689F0 000657F0*/ PPC::Runtime::ASM::fadds(context->f1, context->f3, context->f1);
/*800689F4 000657F4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*800689F8 000657F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800689FC 000657FC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80068A00 00065800*/ PPC::Runtime::ASM::bge(.L_80068A08);
/*80068A04 00065804*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80068A08, 0x80068A08) //this is a jump label
/*80068A08 00065808*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80068A0C 0006580C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80068A10 00065810*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80068A14 00065814*/ PPC::Runtime::ASM::bge(.L_80068A1C);
/*80068A18 00065818*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80068A1C, 0x80068A1C) //this is a jump label
/*80068A1C 0006581C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80068A20 00065820*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80068A24 00065824*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80068A28 00065828*/ PPC::Runtime::ASM::bge(.L_80068A30);
/*80068A2C 0006582C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80068A30, 0x80068A30) //this is a jump label
/*80068A30 00065830*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80068A34 00065834*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80068A38 00065838*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80068A3C 0006583C*/ PPC::Runtime::ASM::bge(.L_80068A44);
/*80068A40 00065840*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80068A44, 0x80068A44) //this is a jump label
/*80068A44 00065844*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80068A48 00065848*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80068A4C 0006584C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80068A50 00065850*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80068A54 00065854*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80068A58 00065858*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80068A5C 0006585C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80068A60 00065860*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80068A64 00065864*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80068A68 00065868*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80068A6C 0006586C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80068A70 00065870*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80068A74 00065874*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80068A78 00065878*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80068A7C 0006587C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80068A80 00065880*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80068A84 00065884*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80068A88 00065888*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80068A8C 0006588C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80068A90 00065890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80068A94 00065894*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80068A98 00065898*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80068A9C 0006589C*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetScissor);
/*80068AA0 000658A0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80068AA4 000658A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*80068AA8 000658A8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80068AAC 000658AC*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetViewportf);
/*80068AB0 000658B0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80068AB4 000658B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80068AB8 000658B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80068ABC 000658BC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80068AC0 000658C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80068AC4 000658C4*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f0);
/*80068AC8 000658C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80068ACC 000658CC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80068AD0 000658D0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80068AD4 000658D4*/ PPC::Runtime::ASM::fdivs(context->f1, context->f3, context->f1);
/*80068AD8 000658D8*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80068ADC 000658DC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*80068AE0 000658E0*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetAspect);
/*80068AE4 000658E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80068AE8 000658E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80068AEC 000658EC*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80068AF0 000658F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80068AF4, 0x80068AF4) //this is a jump label
/*80068AF4 000658F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80068AF8 000658F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80068AFC 000658FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80068B00 00065900*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80068B04 00065904*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*80068B08 00065908*/ PPC::Runtime::ASM::blr();
}